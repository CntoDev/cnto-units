/*
 * places down editor modules used by CNTO
 * and sets their defaults to what CNTO uses
 */

if (!is3DEN) exitWith {};

/* newline char */
private _n = toString [10];

/*
 * array of arrays where each member defines
 *   0: logic unit class
 *   1: (optional) array of attributes to set, each as ["name", value]
 *   2: (optional) CODE to run, newly spawned unit passed as _this
 */
private _modules = [
    /*
     * ACRE2 Init settings (from init.sqf)
     */
    ["Logic", [
        ["Init", "if (!is3DEN) then {" + _n +
                 "    ACRE_TEST_OCCLUSION = false;" + _n +
                 "    [0.2] call acre_api_fnc_setLossModelScale;" + _n +
                 "}"]
    ]],
    /*
     * Headless clients
     */
    ["HeadlessClient_F", [
        ["Name", "HC_0"],
        ["ControlMP", true]
    ]],
    ["HeadlessClient_F", [
        ["Name", "HC_1"],
        ["ControlMP", true]
    ]],
    /*
     * ACRE (shared settings)
     */
    ["acre_api_DifficultySettings", [
        ["acre_api_DifficultySettings_FullDuplex", true],
        ["acre_api_DifficultySettings_Interference", false]
    ]],
    /*
     * ACE
     */
    ["ACE_ModuleBlueForceTracking", [
        ["ACE_ModuleBlueForceTracking_Enabled", true],
        ["ACE_ModuleBlueForceTracking_Interval", 2]
    ]],
    ["ace_captives_moduleSettings", [
        ["ace_captives_moduleSettings_requireSurrender", 0]
    ]],
    ["ACE_ModuleCheckPBOs", [
        ["ACE_ModuleCheckPBOs_Action", 2]
    ]],
    ["ACE_ModuleExplosive", [
        ["ACE_ModuleExplosive_ExplodeOnDefuse", false]
    ]],
    ["ACE_ModuleHearing", [
        ["ACE_ModuleHearing_EnableCombatDeafness", false],
        ["ACE_ModuleHearing_DisableEarRinging", 1],
        ["ACE_ModuleHearing_enabledForZeusUnits", false],
        ["ACE_ModuleHearing_autoAddEarplugsToUnits", false]
    ]],
    ["ace_map_gestures_moduleSettings"],
    ["ACE_ModuleNameTags", [
        ["ACE_ModuleNameTags_playerNamesViewDistance", 30],
        ["ACE_ModuleNameTags_showNamesForAI", 0],
        ["ACE_ModuleNameTags_showCursorTagForVehicles", true]
    ]],
    ["ace_nightvision_ModuleSettings", [
        ["ace_nightvision_ModuleSettings_disableNVGsWithSights", false]
    ]],
    ["ace_finger_moduleSettings", [
        ["ace_finger_moduleSettings_maxRange", 7]
    ]],
    ["ACEX_ModuleSitting"],
    ["ace_spectator_moduleSettings", [
        ["ace_spectator_moduleSettings_unitsFilter", 1],
        ["ace_spectator_moduleSettings_cameraModes", 3],
        ["ace_spectator_moduleSettings_visionModes", 3]
    ]],
    ["ace_weather_ModuleSettings", [
        ["ace_weather_ModuleSettings_enableServerController", false],
        ["ace_weather_ModuleSettings_useACEWeather", false],
        ["ace_weather_ModuleSettings_syncRain", false],
        ["ace_weather_ModuleSettings_syncWind", false],
        ["ace_weather_ModuleSettings_syncMisc", false]
    ]],
    ["ace_zeus_moduleSettings"],
    /*
     * ACE Logistics
     */
    ["ACE_moduleRearmSettings"],
    ["ACE_moduleRepairSettings"],
    /*
     * ACE Medical
     */
    ["ACE_moduleMedicalSettings"],
    ["ACE_moduleMedicalMenuSettings"]
];

if (_this == "coop") then {
_modules append [
    /*
     * ACRE
     */
    ["acre_api_basicMissionSetup", [
        ["acre_api_basicMissionSetup_BabelSetup", 0]
    ]],
    ["acre_api_nameChannels", [
        ["acre_api_nameChannels_Channel_1", "Plt Net 1"],
        ["acre_api_nameChannels_Channel_2", ""],
        ["acre_api_nameChannels_Channel_3", ""],
        ["acre_api_nameChannels_Channel_4", ""],
        ["acre_api_nameChannels_Channel_5", ""],
        ["acre_api_nameChannels_Channel_6", ""],
        ["acre_api_nameChannels_Channel_7", ""],
        ["acre_api_nameChannels_Channel_8", ""],
        ["acre_api_nameChannels_Channel_9", ""],
        ["acre_api_nameChannels_Channel_10", ""]
    ]],
    /*
     * ACE
     */
    ["ACE_ModuleMap", [
        ["ACE_ModuleMap_MapGlow", false],
        ["ACE_ModuleMap_MapShake", false],
        ["ACE_ModuleMap_MapShowCursorCoordinates", true],
        ["ACE_ModuleMap_DefaultChannel", 0]
    ]],
    /*
     * channels disable - all except global+group (0+3)
     */
    ["Logic", [
        ["Init", "1 enableChannel false;" + _n +
                 "2 enableChannel false;" + _n +
                 "4 enableChannel false;" + _n +
                 "5 enableChannel false;"]
    ]]
];
};

if (_this == "pvp") then {
_modules append [
    /*
     * ACRE
     */
    ["acre_api_basicMissionSetup", [
        ["acre_api_basicMissionSetup_RadioSetup", true]  // channels per-side
    ]],
    /*
     * ACE
     */
    ["ACE_ModuleMap", [
        ["ACE_ModuleMap_MapGlow", false],
        ["ACE_ModuleMap_MapShake", false],
        ["ACE_ModuleMap_MapShowCursorCoordinates", true],
        ["ACE_ModuleMap_DefaultChannel", 1]
    ]],
    /*
     * channels disable - all except global+side+group (0+1+3)
     */
    ["Logic", [
        ["Init", "2 enableChannel false;" + _n +
                 "4 enableChannel false;" + _n +
                 "5 enableChannel false;"]
    ]],
    /*
     * - set up killed EH to switch ACRE2 to spectator
     * - kill player on JIP in PvP (respawn taken care of elsewhere)
     */
    ["Logic", [
        ["Init", "if (!hasInterface) exitWith {};" + _n +
                 "0 = [] spawn {" + _n +
                 "    waitUntil { !isNull player };" + _n +
                 "    player addEventHandler [""Killed"", { [true] call acre_api_fnc_setSpectator }];" + _n +
                 "    if (didJIP) then { player setDamage 1 };" + _n +
                 "};"]
    ]]
];
};


/* if outside map view, use camera centre,
 * else (in map view), use map ctrl centre */
private _start = [0,0,0];
if (get3DENActionState "ToggleMap" == 0) then {
    _start = screenToWorld [0.5, 0.5];
} else {
    disableSerialization;
    /* CT_MAP_MAIN is 101 */
    private _ctrl = (finddisplay 313) displayCtrl 51;
    if (ctrlType _ctrl == 101) then {
        _start = _ctrl ctrlMapScreenToWorld [0.5, 0.5];
        _start pushBack 0;  //3D
    };
};

private _module_setattr = {
    params ["_mod", "_modclass", "_attr"];
    _attr params ["_name", "_val"];

    /* does the module exist? */
    if (isNil "_mod") exitWith {
        diag_log format [
            "placeDefaultModules: module '%1' does not exist",
            _modclass
        ];
    };
    /* does the attr exist? */
    private _defval = (_mod get3DENAttribute _name) select 0;
    if (isNil "_defval") exitWith {
        diag_log format [
            "placeDefaultModules: '%1' tried to set '%2' which doesn't exist",
            _modclass, _name
        ];
    };
    /* are we setting the same data type? */
    if (!(_val isEqualType _defval)) exitWith {
        diag_log format [
            "placeDefaultModules: '%1' tried to set '%2' (%3) as %4 (different data type)",
            _modclass, _name, typeName _defval, typeName _val
        ];
    };
    /* are we setting a value which is already set by default? */
    if (_val isEqualTo _defval) exitWith {
        diag_log format [
            "placeDefaultModules: '%1' tried to set '%2' to '%3' which is already '%3' by default",
            _modclass, _name, _val
        ];
    };

    _mod set3DENAttribute [_name, _val];
};

private _root = ceil sqrt count _modules;
{
    _x params ["_class", ["_attrs", []], ["_code", {}]];
    private _pos = _start vectorAdd [_forEachIndex % _root, - floor (_forEachIndex / _root), 0];
    private _module = create3DENEntity ["Logic", _class, _pos];
    { [_module, _class, _x] call _module_setattr } forEach _attrs;
    _module call _code;
} forEach _modules;
