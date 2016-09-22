/*
 * set up EHs and procedures for when a player is killed in PvP
 * or joins in progress to a PvP game
 */

if (!(call cnto_units_fnc_isPvp)) exitWith {};

if (!hasInterface) exitWith {};
0 = [] spawn {
    waitUntil { !isNull player };

    /* set up killed EH to switch ACRE2 to spectator */
    player addEventHandler ["Killed", {
        [true] call acre_api_fnc_setSpectator;
    }];

    /* kill player on JIP in PvP (respawn taken care of elsewhere) */
    if (didJIP) then { player setDamage 1 };
};
