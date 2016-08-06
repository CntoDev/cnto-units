class CfgPatches {
    class cnto_units_col {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {
            "cnto_units_shared",
            "A3_Characters_F",
            "A3_Weapons_F_Ammoboxes",
            "hlcweapons_m14"
        };
    };
};

class CfgFactionClasses {
    class CNTO_FF {
        displayName = "CNTO Freedom Fighters";
        side = 2;
    };
};

class CfgEditorSubcategories {
    //class CNTO_FF_Supplies { displayName = "Freedom Fighter Supplies"; };
    class CNTO_FF_MenUrbanRebels { displayName = "Men (Urban Rebels)"; };
    class CNTO_FF_MenForestGuerrillas { displayName = "Men (Forest Guerrillas)"; };
};

class CfgVehicles {
#include "CfgVehicles.h"
};
class CfgWeapons {
#include "CfgWeapons.h"
};
class CfgGroups {
    class Indep {
        class CNTO_FF {
            name = "CNTO Freedom Fighters";
#include "groups.h"
        };
    };
};

class CfgFunctions {
    class cnto_units_ff {
        class All {
            file = "\cnto\units\ff\functions";
            class doGuerrillaFunctions;  //aggregate
            class nerfMapMarkers;
            class globalChannelOnly;
            class disableTaoFoldmap;
            //class forceNoGroup;
        };
    };
};
