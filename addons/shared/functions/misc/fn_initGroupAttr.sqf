/*
 * set unit's Eden groupID (if leader) and team color
 */

/*
 * is the passed callsign similar to "Alpha 1-1" ?
 */
private _isDefaultCallsign = {
    private _split = _this splitString " ";
    if (count _split != 2) exitWith {false};

    _split params ["_name", "_number"];
    _split = _number splitString "-";
    if (count _split != 2) exitWith {false};

    _split params ["_pri", "_sec"];
    if (!(_pri in ["1","2","3","4"])) exitWith {false};
    if (!(_sec in ["1","2","3"])) exitWith {false};

    true
};

/*
 * rename _grp to the given callsign, warning the Eden user instead
 * if the callsign already exists
 */
private _pickExactCallsign = {
    params ["_grp", "_callsign"];
    if (_callsign in (allGroups apply { groupId _x })) then {
        disableSerialization;
        [
            format ["Callsign %1 already exists, using %2.",
                    _callsign, groupId _grp],
            1
        ] call BIS_fnc_3DENNotification;
    } else {
        _grp set3DENAttribute ["groupID", _callsign];
    };
};

/*
 * find a lowest available numbered callsign, ie. 'NB', 'NB2', 'NB3', ..,
 * according to the _tmpl and rename _grp to it
 * - tmpl must contain %1 where the number should go
 */
private _pickAvailCallsign = {
    params ["_grp", "_tmpl"];
    private _grpids = allGroups apply { groupId _x };
    /* find and use a first available numbered callsign */
    for "_x" from 1 to 99 do {
        private _sign = format [_tmpl, _x];
        if (!(_sign in _grpids)) exitWith {
            _grp set3DENAttribute ["groupID", _sign];
            _x;
        };
    };
};

private _funcs = [_isDefaultCallsign, _pickExactCallsign, _pickAvailCallsign];


params ["_unit", "_name", "_id", "_color"];

if (is3DEN) then {
    0 = [_unit, _name, _id, _funcs] spawn {
        params ["_unit", "_name", "_id", "_funcs"];
        _funcs params ["_isDefaultCallsign", "_pickExactCallsign", "_pickAvailCallsign"];

        waitUntil { !isNull group _unit };  /* wait for Eden group init */
        private _grp = group _unit;
        private _numid = "";  /* callsign/name number */

        /* set group callsign */
        if (leader _grp == _unit) then {
            /* don't override custom callsigns on scenario load (unit init) */
            if (!(groupId _grp call _isDefaultCallsign)) exitWith {};

            /* if callsign doesn't have %1, enforce it to be unique,
             * else select an available number for it
             */
            if (_id find "%1" == -1) then {
                [_grp, _id] call _pickExactCallsign;
            } else {
                _numid = [_grp, _id] call _pickAvailCallsign;
            };
        };

        /* set role description to unit name
         * - as only leader knows the numid (set above), export it to others
         */
        if ((_unit get3DENAttribute "description") isEqualTo [""]) then {
            if (leader _grp == _unit) then {
                _unit setVariable ["cnto_units_group_numid", _numid];
            } else {
                waitUntil { !isNil { (leader _grp) getVariable "cnto_units_group_numid" } };
                _numid = (leader _grp) getVariable "cnto_units_group_numid";
            };
            _unit set3DENAttribute ["description", format [_name, _numid]];
        };

        /* make unit playable */
        _unit set3DENAttribute ["ControlMP", true];
    };
} else {
    if (!isNil "_color" && !isDedicated) then {
        0 = [_unit, _color] spawn {
            params ["_unit", "_color"];
            /* special requirement for assignTeam */
            waitUntil { !isNull player };
            /* wait for other teammates to be created and in place, so they can
             * receive the color update - Arma v1.62 made assignTeam have global
             * effect, but it seems to re-set colors on game start, so wait
             * a second or two (ugh) */
            waitUntil { time > 0 };
            sleep 3;
            /* Arma v1.62 ignores the command for non-leaders, so just run it
             * on all clients */
            _unit assignTeam _color;
        };
    };
};
