/*
 * disable unwanted vanilla chat channels
 */

if (call cnto_units_fnc_isPvp) then {
    /* PvP - all except global+side+group (0+1+3) */
    { _x enableChannel false } forEach [2,4,5];
} else {
    /* Coop - all except global+group (0+3) */
    { _x enableChannel false } forEach [1,2,4,5];
};
