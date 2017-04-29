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
     * Spectators
     */
    ["VirtualSpectator_F", [
        ["Name", "Spectator_0"],
        ["ControlMP", true]
    ]],
    ["VirtualSpectator_F", [
        ["Name", "Spectator_1"],
        ["ControlMP", true]
    ]],
    /*
     * A3EE
     */
    ["basic_vehicle_cargo_filler"],
    ["a3ee_locality_transfer"],
    /*
     * ACRE (shared settings)
     */
    ["acre_api_DifficultySettings", [
        ["acre_api_DifficultySettings_FullDuplex", true],
        ["acre_api_DifficultySettings_Interference", false],
        ["acre_api_DifficultySettings_IgnoreAntennaDirection", true]
    ]],
    /*
     * ACE
     */
    ["ace_advanced_ballistics_ModuleSettings", [
        ["ace_advanced_ballistics_ModuleSettings_enabled", true]
    ]],
    ["ACE_ModuleBlueForceTracking", [
        ["ACE_ModuleBlueForceTracking_Enabled", true],
        ["ACE_ModuleBlueForceTracking_Interval", 2],
        ["ACE_ModuleBlueForceTracking_HideAiGroups", true]
    ]],
    ["ace_captives_moduleSettings", [
        ["ace_captives_moduleSettings_requireSurrender", 0]
    ]],
    ["ACE_ModuleCheckPBOs", [
        ["ACE_ModuleCheckPBOs_CheckAll", true],
        ["ACE_ModuleCheckPBOs_Action", 2], // kick
        ["ACE_ModuleCheckPBOs_Whitelist", "[""cntr""]"]
    ]],
    ["ACE_ModuleExplosive", [
        ["ACE_ModuleExplosive_RequireSpecialist", true],
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
    ["ace_finger_moduleSettings", [
        ["ace_finger_moduleSettings_maxRange", 7]
    ]],
    ["ACEX_ModuleSitting"],
    ["ace_spectator_moduleSettings", [
        ["ace_spectator_moduleSettings_sidesFilter", 3],
        ["ace_spectator_moduleSettings_cameraModes",1]
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
    ["ACE_moduleRepairSettings", [
        ["ACE_moduleRepairSettings_fullRepairLocation", 3],
        ["ACE_moduleRepairSettings_engineerSetting_fullRepair", 1]
    ]],
    /*
     * ACE Medical
     */
    ["ACE_moduleMedicalSettings", [
        ["ACE_moduleMedicalSettings_litterCleanUpDelay", 900],
        ["ACE_moduleMedicalSettings_bleedingCoefficient", 0.80000001],
        ["ACE_moduleMedicalSettings_level", 2]
    ]],
    ["ACE_moduleAdvancedMedicalSettings", [
        ["ACE_moduleAdvancedMedicalSettings_enableAdvancedWounds", true],
        ["ACE_moduleAdvancedMedicalSettings_consumeItem_PAK", 0],
        ["ACE_moduleAdvancedMedicalSettings_useLocation_PAK", 0],
        ["ACE_moduleAdvancedMedicalSettings_consumeItem_SurgicalKit", 0],
        ["ACE_moduleAdvancedMedicalSettings_useLocation_SurgicalKit", 0],
        ["ACE_moduleAdvancedMedicalSettings_useCondition_SurgicalKit", 1],
        ["ACE_moduleAdvancedMedicalSettings_healHitPointAfterAdvBandage", true]
    ]],
    ["ModuleCreateDiaryRecord_F", [
    	["ModuleCreateDiaryRecord_F_Title", "TTP'S Overview"],
    	["ModuleCreateDiaryRecord_F_Description", "<br></br>This entire section will detail CNTO Tactics, Techniques and Procedures we use in game. Please read over and use to remind yourself and remind others."],
    	["ModuleCreateDiaryRecord_F_Owner", 3],
    	["ModuleCreateDiaryRecord_F_Subject", "CNTO TTP'S"]
    ]],
    ["ModuleCreateDiaryRecord_F", [
    	["ModuleCreateDiaryRecord_F_Title", "AT PROCEDURE"],
    	["ModuleCreateDiaryRecord_F_Description", "<font color='#FF0000' size='15'>AT PROCEDURE</font color> " + _n + "<br></br> " + _n + "<br></br> " + _n + "Check your surroundings while preparing the weapon. " + _n + "<br></br> " + _n + "<br></br> " + _n + "Shout “Clear Backblast!” once prepped. " + _n + "<br></br> " + _n + "<br></br> " + _n + "Team mates will respond with “Backblast Clear” or if no response received check visually if backblast is clear. " + _n + "<br></br> " + _n + "<br></br> " + _n + "Shout “Rocket” before pulling the trigger."],
    	["ModuleCreateDiaryRecord_F_Owner", 3],
    	["ModuleCreateDiaryRecord_F_Subject", "CNTO TTP'S"]
    ]],
    ["ModuleCreateDiaryRecord_F", [
    	["ModuleCreateDiaryRecord_F_Title", "CONTACT REPORTS"],
    	["ModuleCreateDiaryRecord_F_Description", "<font color='#FF0000' size='15'>CONTACT REPORTS</font color> " + _n + "<br></br> " + _n + "<br></br> " + _n + "A = Alert by saying “CONTACT”. " + _n + "<br></br> " + _n + "<br></br> " + _n + "O = Orient either using the relative bearing “LEFT” or “RIGHT”, general compass “NW” or “S”, specific compass bearing “280°” or “95°”. Range if immediate threat in meters. " + _n + "<br></br> " + _n + "<br></br> " + _n + "D = Describe what did you see? “Infantry”, “Fire Team”, “Tank”, “Truck”. " + _n + "<br></br> " + _n + "<br></br> " + _n + "E = Expound on range if not already given. Specific degree bearing to the target. Info about what the target is doing. Specific positioning of the target “two soldiers on the roof”. " + _n + "<br></br> " + _n + "<br></br> " + _n + "<br></br> " + _n + "Example: “Contact, South West 100m, Fire Team, Moving right to left."],
    	["ModuleCreateDiaryRecord_F_Owner", 3],
    	["ModuleCreateDiaryRecord_F_Subject", "CNTO TTP'S"]
    ]],
    ["ModuleCreateDiaryRecord_F", [
    	["ModuleCreateDiaryRecord_F_Title", "ACE REPORT"],
    	["ModuleCreateDiaryRecord_F_Description", "<font color='#FF0000' size='15'>ACE REPORT</font color> " + _n + "<br></br> " + _n + "<br></br> " + _n + "Individual to FTL " + _n + "<br></br> " + _n + "<br></br> " + _n + "Ammo = Give details (Red on ammo) 3 or less mags, AR 2 or less belts left in fire team. (Yellow on ammo) 4 - 7 mags, AR 3 - 4 belts in fire team, (Green on ammo) 8 mags or more, AR 5 belts or more in fire team. " + _n + "<br></br> " + _n + "<br></br> " + _n + "Casualties = (Red) heavily wounded need treatment ASAP, (Yellow) wounded fighting effective, (Green) all good. " + _n + "<br></br> " + _n + "<br></br> " + _n + "Equipment = If you still have specialist equipment for example AT, mines, explosives, ladder or AR state (Green), if you have lost or used specialist equipment state (Red). " + _n + "<br></br> " + _n + "<br></br> " + _n + "Example: I am good on ammo, not injured and carry no specialist equipment my response is “All Green” " + _n + "<br></br> " + _n + "<br></br> " + _n + "Example: I am low on ammo, lightly wounded and carry no specialist equipment my response is “Red, Yellow, Green” " + _n + "<br></br> " + _n + "<br></br> " + _n + "Example: I am good on ammo, not injured and have used my AT my response is “Green, Green, Red” " + _n + "<br></br> " + _n + "<br></br> " + _n + "<br></br> " + _n + "FTL to SL " + _n + "<br></br> " + _n + "<br></br> " + _n + "Ammo = Your combined ammo state after you have redistributed (Low or Good), if after redistribution you still have team members on red or yellow ammo states you overall ammo state is low. " + _n + "<br></br> " + _n + "<br></br> " + _n + "Casualties = State your dead first, then wounded after that. For example - “Alpha 2, 1 dead, 1 wounded”. Alternatively, “Alpha 2, 3 up, one is wounded”. " + _n + "<br></br> " + _n + "<br></br> " + _n + "Equipment = If the team has lost any important equipment, it is noted here. For example all AT used, AR lost or explosives lost etc. Be specific if down on any equipment if not down response is “Equipment good”. " + _n + "<br></br> " + _n + "<br></br> " + _n + "Example: “SL this is A1, ACE Report, Ammo Low, 1 Dead, Equipment good”. " + _n + "<br></br> " + _n + "<br></br> " + _n + "<br></br> " + _n + "<br></br> " + _n + "As a squad leader, ACE reports from your fireteam leaders are compiled to form the sitrep that you give to the platoon commander."],
    	["ModuleCreateDiaryRecord_F_Owner", 3],
    	["ModuleCreateDiaryRecord_F_Subject", "CNTO TTP'S"]
    ]]
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
     * Chat channel disablement; Coop - all except global+group (0+3)
     */
    ["Logic", [
        ["Init", "{ _x enableChannel false } forEach [1,2,4,5]"]
    ]]
];
};

if (_this == "pvp") then {
_modules append [
    /*
     * A3EE
     */
    ["a3ee_kill_on_jip"],
    /*
     * ACRE
     */
    ["acre_api_basicMissionSetup", [
        ["acre_api_basicMissionSetup_BabelSetup", 0],
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
     * Chat channel disablement; PvP - all except global+side+group (0+1+3)
     */
    ["Logic", [
        ["Init", "{ _x enableChannel false } forEach [2,4,5]"]
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
