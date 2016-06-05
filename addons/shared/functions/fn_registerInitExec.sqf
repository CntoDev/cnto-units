/*
 * register CODE to be run whenever a unit of a given class
 * (or any inherited class) gets spawned, using CBA
 */

/* no CBA ? */
if (isNil "CBA_fnc_addClassEventHandler") exitWith {};

#define REGISTER_CODE(class, code) { \
        [#class, _x, code] call CBA_fnc_addClassEventHandler; \
    } forEach ["init", "respawn"]
private "_code";

/*
 * Cars
 */
_code = {
    0 = (_this select 0) spawn {
        sleep 1; if (!local _this) exitWith {};

        clearWeaponCargoGlobal _this;
        clearMagazineCargoGlobal _this;
        clearBackpackCargoGlobal _this;
        clearItemCargoGlobal _this;

        _this addItemCargoGlobal ["ACE_fieldDressing", floor random [0, 2, 8]];
        _this addItemCargoGlobal ["ACE_morphine", floor random [0, 1, 4]];

        if (random 100 < 1) then { _this addItemCargoGlobal ["ItemGPS", 1] };
        if (random 20 < 1) then { _this addItemCargoGlobal ["SmokeShell", floor random 4] };
        if (random 10 < 1) then { _this addItemCargoGlobal ["ACE_CableTie", floor random 5] };
        if (random 10 < 1) then {
            _this addItemCargoGlobal ["ACE_MapTools", 1];
            _this addItemCargoGlobal ["ItemMap", 1];
            _this addItemCargoGlobal ["ItemCompass", floor random 2];
        };
    };
};
REGISTER_CODE(Car, _code);

/*
 * Tanks
 */
_code = {
    0 = (_this select 0) spawn {
        sleep 1; if (!local _this) exitWith {};

        clearWeaponCargoGlobal _this;
        clearMagazineCargoGlobal _this;
        clearBackpackCargoGlobal _this;
        clearItemCargoGlobal _this;

        _this addItemCargoGlobal ["ACE_fieldDressing", floor random [4, 8, 12]];
        _this addItemCargoGlobal ["ACE_morphine", floor random [2, 4, 6]];
        //_this addItemCargoGlobal ["B_Parachute", 4];
    };
};
REGISTER_CODE(Tank, _code);
REGISTER_CODE(Helicopter, _code);
REGISTER_CODE(Ship, _code);
