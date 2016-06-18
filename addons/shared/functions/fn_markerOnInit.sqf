/*
 * create a 3DEN marker on unit's position of a given type/text/etc.
 */

params ["_unit", "_class", "_text", "_color", "_alpha"];

if (!is3DEN) exitWith {};

private _mark = create3DENEntity ["Marker", _class, position _unit];
if (!isNil "_text") then { _mark set3DENAttribute ["text", _text] };
if (!isNil "_color") then { _mark set3DENAttribute ["colorName", _color] };
if (!isNil "_alpha") then { _mark set3DENAttribute ["alpha", _color] };
