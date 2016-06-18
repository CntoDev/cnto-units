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
                _grp set3DENAttribute ["groupID", _id];
            };
        };
        _unit set3DENAttribute ["ControlMP", true];  /* playable */
    };
} else {
    /* not on JIP / on a running mission - colors are managed by grp leader */
    if (time > 0) exitWith {};
    /* run on all clients, even where the unit is REMOTE - it doesn't matter
     * for assignTeam, we actually want it to run everywhere! */
    if (!isNil "_color" && !isDedicated) then {
        0 = [_unit, _color] spawn {
            params ["_unit", "_color"];
            /* special requirement for assignTeam */
            waitUntil { !isNull player };
            _unit assignTeam _color;
        };
    };
};
