class CfgPatches {
    class cnto_units_shared {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"3den"};
    };
};

class CfgFunctions {
    class cnto_units {
        class All {
            file = "\cnto\units\shared\functions";
            class groupIDSync { postInit = 1; };
            class isDefaultCallsign;
            class initGroupAttr;
            class registerInitExec { preInit = 1; };
            class godlike;
            class markerOnInit;
            class setMissionDefaults;
            class placeDefaultModules;
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
