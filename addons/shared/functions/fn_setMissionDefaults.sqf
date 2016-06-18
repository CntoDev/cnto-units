/*
 * pre-sets some mission attributes in 3DEN
 */

if (!is3DEN) exitWith {};

set3DENMissionAttributes [
    ["Scenario", "Briefing", true],
    ["Scenario", "Debriefing", false],
    ["Scenario", "Saving", false],
    ["Scenario", "ShowMap", true],
    ["Scenario", "ShowCompass", true],
    ["Scenario", "ShowWatch", true],
    ["Scenario", "ShowGPS", true],
    ["Scenario", "ShowHUD", true],
    ["Scenario", "ShowUAVFeed", true],
    //["Scenario", "ForceRotorLibSimulation", false],
    ["Scenario", "EnableDebugConsole", 1],
    ["Scenario", "SaveBinarized", false],
    ["Multiplayer", "GameType", "Coop"],
    ["Multiplayer", "MinPlayers", 0],
    ["Multiplayer", "MaxPlayers", 0],
    ["Multiplayer", "DisabledAI", false],
    ["Multiplayer", "JoinUnassigned", true],
    ["Multiplayer", "Respawn", 3],  // on custom location
    ["Multiplayer", "RespawnTemplates", []],
    ["Multiplayer", "RespawnDelay", 5],
    ["Multiplayer", "RespawnVehicleDelay", 5],
    ["Multiplayer", "RespawnDialog", false],
    ["Multiplayer", "RespawnButton", true],
    ["Multiplayer", "EnableTeamSwitch", false],
    ["Multiplayer", "AIKills", false]
];

if (_this == "pvp") then {
    set3DENMissionAttributes [
        ["Multiplayer", "GameType", "DM"],
        ["Multiplayer", "Respawn", 1],  // to spectator
        ["Multiplayer", "RespawnDelay", 0],
        ["Multiplayer", "RespawnVehicleDelay", 0],
        ["Multiplayer", "RespawnButton", false]
    ];
};
