#include "\cnto\units\shared\include.h"

class CfgPatches {
    class cnto_units_shared {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {
            "3den",
            "A3_Structures_F_Heli_Items_Luggage"  // scopebox
        };
    };
};

class CfgFunctions {
    class cnto_units {
        class MissionDefaults {
            file = "\cnto\units\shared\functions\mission_defaults";
            class setMissionDefaults;
            class placeDefaultModules;
        };
        class OnStart {
            file = "\cnto\units\shared\functions\onstart";
            class groupIDSync { postInit = 1; };
            class ignoreFriendlyFire { postInit = 1; };
            class disableChannels { postInit = 1; };
            class preparePvpDeath { postInit = 1; };
        };
        class Misc {
            file = "\cnto\units\shared\functions\misc";
            class isDefaultCallsign;
            class initGroupAttr;
            class godlike;
            class isPvp;
        };
    };
};

/* for Empty objects */
class CfgEditorCategories {
    class CNTO_Other {
        displayName = "CNTO Other";
    };
};
class CfgEditorSubcategories {
    class CNTO_MenSpecial { displayName = "Men (Special)"; };
    class CNTO_Misc { displayName = "Misc"; };
};
class CfgGroups {
    class Empty {
        class CNTO_Other {
            name = "CNTO Other";
        };
    };
};

class CfgVehicles {
#include "CfgVehicles.h"
};

class Cfg3DEN {
#include "Cfg3DEN.h"
};

class ctrlMenuStrip;
class display3DEN {
    class Controls {
        class MenuStrip: ctrlMenuStrip {
            class Items {
                /* Attributes menu */
                class Attributes {
                    items[] += {"CNTO_Mission_Data"};
                };
                class CNTO_Mission_Data {
                    text = "CNTO Mission Data";
                    picture = "\cnto\units\shared\data\cnto_icon.paa";
                    /* from Cfg3DEN */
                    action = "edit3DENMissionAttributes ""CNTO_Mission_Data""";
                };
                /* Tools menu */
                class Tools {
                    items[] += {"CNTO_Defaults_Coop","CNTO_Defaults_PvP"};
                };
                class CNTO_Defaults_Coop {
                    text = "Set CNTO Defaults (Coop)";
                    picture = "\cnto\units\shared\data\cnto_icon.paa";
                    action = "collect3DENHistory {""coop"" call cnto_units_fnc_setMissionDefaults; ""coop"" call cnto_units_fnc_placeDefaultModules;}";
                };
                class CNTO_Defaults_PvP {
                    text = "Set CNTO Defaults (PvP)";
                    picture = "\cnto\units\shared\data\cnto_icon.paa";
                    action = "collect3DENHistory {""pvp"" call cnto_units_fnc_setMissionDefaults; ""pvp"" call cnto_units_fnc_placeDefaultModules;}";
                };
            };
        };
    };
};
