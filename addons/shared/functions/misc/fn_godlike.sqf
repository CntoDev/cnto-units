/*
 * make a unit "godlike" (immortal + captive), expect to be called from
 * unit init, therefore wait until the unit is transferred to its final
 * client (at least hope for it, using sleep)
 * - this is needed because ie. allowDamage resets on transfer
 */

0 = _this spawn {
    sleep 1;
    if (!local _this) exitWith {};

    _this allowDamage false;
    _this setCaptive true;

    /* hide on the map (ACE BluFor Tracking) */
    _this setVariable ["ACE_map_hideBlueForceMarker", true, true];
    (group _this) setVariable ["ACE_map_hideBlueForceMarker", true, true];
};
