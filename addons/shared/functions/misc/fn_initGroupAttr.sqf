/*
 * set unit's Eden groupID (if leader) and team color
 */

params ["_unit", "_id", "_color"];

if (is3DEN) then {
    0 = [_unit, _id] spawn {
        params ["_unit", "_id"];
        waitUntil { !isNull group _unit };  /* wait for Eden group init */
        private _grp = group _unit;
        if (leader _grp == _unit) then {
            private _grpid = (_grp get3DENAttribute "groupID") select 0;
            /* don't override custom callsigns on scenario load (unit init) */
            if (_grpid call cnto_units_fnc_isDefaultCallsign) then {
                /* does it already exist ? */
                if (_id in (allGroups apply { groupId _x })) then {
                    disableSerialization;
                    [
                        format ["Callsign %1 already exists, using %2.",
                                _id, groupId _grp],
                        1
                    ] call BIS_fnc_3DENNotification;
                } else {
                    _grp set3DENAttribute ["groupID", _id];
                };
            };
        };
        _unit set3DENAttribute ["ControlMP", true];  /* playable */
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
