/*
 * returns true if the mission is a PvP mission
 * (with reasonable accuracy, some of the other types like RPG can still
 *  technically be a PvP mission, but let's be reasonable here)
 */

switch (getText (getMissionConfig "header" >> "gameType")) do {
    case "CTF";
    case "CTI";
    case "DM";
    case "EndGame";
    case "KOTH";
    case "LastMan";
    case "SC";
    case "Support";
    case "TDM": { true };
    default { false };
};
