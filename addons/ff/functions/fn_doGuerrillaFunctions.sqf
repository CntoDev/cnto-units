if (is3DEN) exitWith {};
if (!hasInterface) exitWith {};

0 = _this spawn {
    waitUntil { !isNull player };
    if (_this != player) exitWith {};

    call cnto_units_ff_fnc_nerfMapMarkers;
    call cnto_units_ff_fnc_globalChannelOnly;
    call cnto_units_ff_fnc_disableTaoFoldmap;
};
