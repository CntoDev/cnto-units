/*
 * is the passed callsign similar to "Alpha 1-1" ?
 */

private _split = _this splitString " ";
if (count _split != 2) exitWith {false};

_split params ["_name", "_number"];
_split = _number splitString "-";
if (count _split != 2) exitWith {false};

_split params ["_pri", "_sec"];
if (!(_pri in ["1","2","3","4"])) exitWith {false};
if (!(_sec in ["1","2","3"])) exitWith {false};

true
