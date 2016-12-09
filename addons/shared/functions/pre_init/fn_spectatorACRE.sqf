/* no CBA ? */
if (isNil "CBA_fnc_addClassEventHandler") exitWith {};

#define REGISTER_CODE(class, code) { \
        [#class, _x, code] call CBA_fnc_addClassEventHandler; \
    } forEach ["init", "respawn"]
private "_code";

_code = {
    0 = (_this select 0) spawn {
        sleep 1; if (!local _this) exitWith {};
        _done = [true] call acre_api_fnc_setSpectator;
    };
};
REGISTER_CODE(VirtualSpectator_F, _code);