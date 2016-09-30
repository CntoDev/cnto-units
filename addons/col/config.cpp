#include "\cnto\units\shared\include.h"

class CfgPatches {
    class cnto_units_col {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {
            "cnto_units_shared",
            "A3_Characters_F",
            "A3_Weapons_F_Ammoboxes",
            "rhsusf_c_weapons",
            "hlcweapons_g3",
            "rhs_c_weapons"
        };
    };
};

class CfgFactionClasses {
    class CNTO_COL {
        displayName = "CNTO Colombian Army";
        side = 2;
    };
};

class CfgEditorSubcategories {
    class CNTO_COL_Supplies { displayName = "Colombian Supplies"; };
};

class CfgVehicles {
#include "CfgVehicles.h"
};
class CfgWeapons {
#include "CfgWeapons.h"
};
class CfgGroups {
    class Indep {
        class CNTO_COL {
            name = "CNTO Colombian Army";
#include "groups\groups.h"
        };
    };
};
