class CfgPatches {
    class cnto_units_viscom {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"cnto_units_shared", "A3_Characters_F"};
    };
};

class CfgEditorSubcategories {
    class CNTO_VISCOM { displayName = "VISCOM"; };
};

class CfgVehicles {
#include "CfgVehicles.h"
};

class CfgGroups {
    class Empty {
        class CNTO_Other {
            class VISCOM {
                name = "VISCOM";
#include "CfgGroups.h"
            };
        };
    };
};
