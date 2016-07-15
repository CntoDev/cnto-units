class CfgPatches {
    class cnto_units_us {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {
            "cnto_units_shared",
            "A3_Characters_F",
            "A3_Weapons_F_Ammoboxes",
            "rhsusf_c_weapons",
            "tf47_m3maaws"
        };
    };
};

class CfgFactionClasses {
    class CNTO_US {
        displayName = "CNTO US Army";
        side = 1;
    };
};

class CfgEditorSubcategories {
    class CNTO_US_Supplies { displayName = "US Supplies"; };
};

class CfgVehicles {
#include "CfgVehicles.h"
};
class CfgWeapons {
#include "CfgWeapons.h"
};
class CfgGroups {
    class West {
        class CNTO_US {
            name = "CNTO US Army";
#include "groups\groups.h"
        };
    };
};
