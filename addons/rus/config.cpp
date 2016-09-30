#include "\cnto\units\shared\include.h"

class CfgPatches {
    class cnto_units_rus {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {
            "cnto_units_shared",
            "A3_Characters_F",
            "A3_Weapons_F_Ammoboxes",
            "rhs_c_weapons"
        };
    };
};

class CfgFactionClasses {
    class CNTO_RUS {
        displayName = "CNTO RUS";
        side = 1;
    };
};

class CfgEditorSubcategories {
    class CNTO_RUS_Supplies { displayName = "Russian Supplies"; };
};

class CfgVehicles {
#include "CfgVehicles.h"
};
class CfgWeapons {
#include "CfgWeapons.h"
};
class CfgGroups {
    class East {
        class CNTO_RUS {
            name = "CNTO RUS";
#include "groups\groups.h"
        };
    };
};
