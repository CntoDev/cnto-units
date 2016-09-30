#include "\cnto\units\shared\include.h"

class CfgPatches {
    class cnto_units_sptz {
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
    class CNTO_SPTZ {
        displayName = "CNTO Spetsnaz";
        side = 1;
    };
};

class CfgEditorSubcategories {
    class CNTO_SPTZ_Supplies { displayName = "Spetsnaz Supplies"; };
};

class CfgVehicles {
#include "CfgVehicles.h"
};
class CfgWeapons {
#include "CfgWeapons.h"
};
class CfgGroups {
    class East {
        class CNTO_SPTZ {
            name = "CNTO Spetsnaz";
#include "groups\groups.h"
        };
    };
};
