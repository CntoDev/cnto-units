/*
 * places down editor modules used by CNTO
 * and sets their defaults to what CNTO uses
 */

if (!is3DEN) exitWith {};

/* newline char */
private _n = toString [10];

private _modules = [
    /*
     * ACRE2 Init settings (from init.sqf)
     */
    ["Logic", {
        _this set3DENAttribute ["Init", "if (!is3DEN) then {" + _n +
                                        "    ACRE_TEST_OCCLUSION = false;" + _n +
                                        "    [0.2] call acre_api_fnc_setLossModelScale;" + _n +
                                        "};"];
    }],
    /*
     * Headless clients
     */
    ["HeadlessClient_F", {
        _this set3DENAttribute ["Name", "HC_0"];
        _this set3DENAttribute ["ControlMP", true];
    }],
    ["HeadlessClient_F", {
        _this set3DENAttribute ["Name", "HC_1"];
        _this set3DENAttribute ["ControlMP", true];
    }],
    /*
     * ACRE
     */
    ["acre_api_basicMissionSetup", {
        _this set3DENAttribute ["acre_api_basicMissionSetup_RadioSetup", true];
        _this set3DENAttribute ["acre_api_basicMissionSetup_BabelSetup", 0];
        _this set3DENAttribute ["acre_api_basicMissionSetup_DefaultRadio", ""];
        _this set3DENAttribute ["acre_api_basicMissionSetup_DefaultRadio_Two", ""];
        _this set3DENAttribute ["acre_api_basicMissionSetup_DefaultRadio_Three", ""];
        _this set3DENAttribute ["acre_api_basicMissionSetup_DefaultRadio_Four", ""];
    }],
    ["acre_api_DifficultySettings", {
        _this set3DENAttribute ["acre_api_DifficultySettings_FullDuplex", true];
        _this set3DENAttribute ["acre_api_DifficultySettings_Interference", false];
    }],
    /*
     * ACE
     */
    ["ACE_ModuleBlueForceTracking", {
        _this set3DENAttribute ["ACE_ModuleBlueForceTracking_Enabled", true];
        _this set3DENAttribute ["ACE_ModuleBlueForceTracking_Interval", 2];
    }],
    ["ace_captives_moduleSettings", {
        _this set3DENAttribute ["ace_captives_moduleSettings_requireSurrender", 0];
        _this set3DENAttribute ["ace_captives_moduleSettings_allowHandcuffOwnSide", false];
    }],
    ["ACE_ModuleCheckPBOs", {
        _this set3DENAttribute ["ACE_ModuleCheckPBOs_Action", 2];
    }],
    ["ACE_ModuleExplosive", {
        _this set3DENAttribute ["ACE_ModuleExplosive_ExplodeOnDefuse", false];
    }],
    ["ACE_ModuleHearing", {
        _this set3DENAttribute ["ACE_ModuleHearing_EnableCombatDeafness", false];
        _this set3DENAttribute ["ACE_ModuleHearing_DisableEarRinging", 1];
        _this set3DENAttribute ["ACE_ModuleHearing_enabledForZeusUnits", false];
        _this set3DENAttribute ["ACE_ModuleHearing_autoAddEarplugsToUnits", false];
    }],
    ["ace_map_gestures_moduleSettings"],
    ["ACE_ModuleNameTags", {
        _this set3DENAttribute ["ACE_ModuleNameTags_showPlayerNames", 1];
        _this set3DENAttribute ["ACE_ModuleNameTags_playerNamesViewDistance", 30];
        _this set3DENAttribute ["ACE_ModuleNameTags_showNamesForAI", 0];
        _this set3DENAttribute ["ACE_ModuleNameTags_showVehicleCrewInfo", 1];
        _this set3DENAttribute ["ACE_ModuleNameTags_showCursorTagForVehicles", true];
        _this set3DENAttribute ["", 0];
    }],
    ["ace_nightvision_ModuleSettings", {
        _this set3DENAttribute ["ace_nightvision_ModuleSettings_disableNVGsWithSights", false];
    }],
    ["ace_finger_moduleSettings", {
        _this set3DENAttribute ["ace_finger_moduleSettings_maxRange", 7];
    }],
    ["ACE_ModuleSitting"],
    ["ace_spectator_moduleSettings", {
        _this set3DENAttribute ["ace_spectator_moduleSettings_unitsFilter", 1];
        _this set3DENAttribute ["ace_spectator_moduleSettings_cameraModes", 3];
        _this set3DENAttribute ["ace_spectator_moduleSettings_visionModes", 3];
    }],
    ["ace_weather_ModuleSettings", {
        _this set3DENAttribute ["ace_weather_ModuleSettings_enableServerController", false];
        _this set3DENAttribute ["ace_weather_ModuleSettings_useACEWeather", false];
        _this set3DENAttribute ["ace_weather_ModuleSettings_syncRain", false];
        _this set3DENAttribute ["ace_weather_ModuleSettings_syncWind", false];
        _this set3DENAttribute ["ace_weather_ModuleSettings_syncMisc", false];
    }],
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
    ["acre_api_nameChannels", {
        _this set3DENAttribute ["acre_api_nameChannels_SideSelect", 1];
        _this set3DENAttribute ["acre_api_nameChannels_Channel_1", "Plt Net 1"];
        _this set3DENAttribute ["acre_api_nameChannels_Channel_2", ""];
        _this set3DENAttribute ["acre_api_nameChannels_Channel_3", ""];
        _this set3DENAttribute ["acre_api_nameChannels_Channel_4", ""];
        _this set3DENAttribute ["acre_api_nameChannels_Channel_5", ""];
        _this set3DENAttribute ["acre_api_nameChannels_Channel_6", ""];
        _this set3DENAttribute ["acre_api_nameChannels_Channel_7", ""];
        _this set3DENAttribute ["acre_api_nameChannels_Channel_8", ""];
        _this set3DENAttribute ["acre_api_nameChannels_Channel_9", ""];
        _this set3DENAttribute ["acre_api_nameChannels_Channel_10", ""];
    }],
    ["ACE_ModuleMap", {
        _this set3DENAttribute ["ACE_ModuleMap_MapGlow", false];
        _this set3DENAttribute ["ACE_ModuleMap_MapShake", false];
        _this set3DENAttribute ["ACE_ModuleMap_MapShowCursorCoordinates", true];
        _this set3DENAttribute ["ACE_ModuleMap_DefaultChannel", 0];
    }],
    /*
     * channels disable - all except global (0)
     */
    ["Logic", {
        _this set3DENAttribute ["Init", "1 enableChannel false;" + _n +
                                        "2 enableChannel false;" + _n +
                                        "3 enableChannel false;" + _n +
                                        "4 enableChannel false;" + _n +
                                        "5 enableChannel false;"];
    }]
];
};

if (_this == "pvp") then {
_modules append [
    ["ACE_ModuleMap", {
        _this set3DENAttribute ["ACE_ModuleMap_MapGlow", false];
        _this set3DENAttribute ["ACE_ModuleMap_MapShake", false];
        _this set3DENAttribute ["ACE_ModuleMap_MapShowCursorCoordinates", true];
        _this set3DENAttribute ["ACE_ModuleMap_DefaultChannel", 1];
    }],
    /*
     * channels disable - all except global+side (0+1)
     */
    ["Logic", {
        _this set3DENAttribute ["Init", "2 enableChannel false;" + _n +
                                        "3 enableChannel false;" + _n +
                                        "4 enableChannel false;" + _n +
                                        "5 enableChannel false;"];
    }]
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

private _root = ceil sqrt count _modules;
{
    _x params ["_class", ["_code", {}]];
    private _pos = _start vectorAdd [_forEachIndex % _root, - floor (_forEachIndex / _root), 0];
    private _module = create3DENEntity ["Logic", _class, _pos];
    _module call _code;
} forEach _modules;
