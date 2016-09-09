class CfgPatches {
    class cnto_units_tfn {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {
            "cnto_units_shared",
            "cnto_assets",
            "A3_Characters_F",
            "A3_Weapons_F_Ammoboxes",
            "rhsusf_c_weapons",
            "hlcweapons_ar15",
            "tf47_m3maaws"
        };
    };
};

class CfgFactionClasses {
    class CNTO_TFN {
        displayName = "CNTO Task Force Noctem";
        side = 2;
    };
};

class CfgEditorSubcategories {
    class CNTO_TFN_Supplies { displayName = "TFN Supplies"; };
};

class CfgVehicles {
#include "CfgVehicles.h"
};
class CfgWeapons {
#include "CfgWeapons.h"
};
class CfgGroups {
    class Indep {
        class CNTO_TFN {
            name = "CNTO Task Force Noctem";
#include "groups\groups.h"
        };
    };
};
