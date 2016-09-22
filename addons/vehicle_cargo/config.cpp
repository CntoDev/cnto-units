class CfgPatches {
    class cnto_units_vehicle_cargo {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"3den"};
    };
};

class Cfg3DEN {
    class Object {
        class AttributeCategories {
            class Custom {
                class Attributes {
                    class DontClearCargo {
                        property = "cnto_units_vehicle_cargo_dontclear";
                        control = "Checkbox";
                        displayName = "Don't clear vehicle cargo";
                        expression = "_this setVariable [""%s"",_value,true]";
                        defaultValue = "false";
                        tooltip = "By default, all inventories of vehicles are wiped 1sec after mission starts, to prevent stupid mods from adding their items via init EHs into random vehicles. This prevents mission makers from specifying loadout via Eden UI. Use this option to disable the functionality at your own risk.";
                    };
                };
            };
        };
    };
};

class CfgFunctions {
    class cnto_units_vehicle_cargo {
        class All {
            file = "\cnto\units\vehicle_cargo";
            class setCargo;
        };
    };
};

#define HOOK_EH(target) \
    class target { \
        class cnto_units_vehicle_cargo { \
            init = "(_this select 0) spawn cnto_units_vehicle_cargo_fnc_setCargo"; \
        }; \
    }

class Extended_InitPost_EventHandlers {
    HOOK_EH(Car);
    HOOK_EH(Tank);
    HOOK_EH(Helicopter);
    HOOK_EH(Plane);
    HOOK_EH(Ship);
};
