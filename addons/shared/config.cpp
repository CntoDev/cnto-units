class CfgPatches {
    class cnto_units_shared {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {};
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
