class CfgPatches {
    class cnto_units_shared {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"3den"};
    };
};

class CfgFunctions {
    class cnto_units {
#include "CfgFunctions.h"
    };
};

/* for Empty objects */
class CfgEditorCategories {
    class CNTO_Other {
        displayName = "CNTO Other";
    };
};
class CfgGroups {
    class Empty {
        class CNTO_Other {
            name = "CNTO Other";
        };
    };
};

class Cfg3DEN {
#include "Cfg3DEN.h"
};

class ctrlMenuStrip;
class display3DEN {
    class Controls {
        class MenuStrip: ctrlMenuStrip {
            class Items {
                class Tools {
                    items[] += {"CNTO_Defaults_Coop","CNTO_Defaults_PvP"};
                };
                class CNTO_Defaults_Coop {
                    text = "Set CNTO Defaults (Coop)";
                    //picture = "\MyAddon\data\myAwesomeTool_ca.paa"; // Item picture
                    // Expression called upon clicking; ideally, it should call your custom function
                    action = """coop"" call cnto_units_fnc_setMissionDefaults";
                };
                class CNTO_Defaults_PvP {
                    text = "Set CNTO Defaults (PvP)";
                    //picture = "\MyAddon\data\myAwesomeTool_ca.paa"; // Item picture
                    // Expression called upon clicking; ideally, it should call your custom function
                    action = """pvp"" call cnto_units_fnc_setMissionDefaults";
                };
            };
        };
    };
};
