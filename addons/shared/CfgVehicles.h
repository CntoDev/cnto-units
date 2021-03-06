/*
 * Crates
 */

#define ADD_SCOPE(item, name) \
    class item { \
        displayName = name; \
        displayNameDefault =; \
        showWindow = 0; \
        priority = 1; \
        radius = 3; \
        position = "camera"; \
        condition = "true"; \
        onlyForPlayer = 1; \
        statement = QUOTE(player addPrimaryWeaponItem QUOTE(QUOTE(item))); \
    }

class PlasticCase_01_base_F;
class Land_PlasticCase_01_small_F : PlasticCase_01_base_F {
    class EventHandlers;
};
class cnto_shared_scopebox : Land_PlasticCase_01_small_F {
    scope = 1;
    editorCategory = CNTO_Other;
    editorSubcategory = CNTO_Misc;
    displayName = "Scopebox";
    class UserActions {
        ADD_SCOPE(optic_ACO_grn,     "<t color='#e05200'>ACO Green</t>");
        ADD_SCOPE(optic_Aco,         "<t color='#e05200'>ACO Red</t>");
        ADD_SCOPE(optic_ACO_grn_smg, "<t color='#e05200'>ACO SMG Green</t>");
        ADD_SCOPE(optic_Aco_smg,     "<t color='#e05200'>ACO SMG Red</t>");

        ADD_SCOPE(RH_compM2,      "<t color='#008ee0'>Aimpoint CompM2</t>");
        //ADD_SCOPE(RH_compM21,     "<t color='#008ee0'>Aimpoint CompM2 Low</t>");
        ADD_SCOPE(RH_compM2_tan,  "<t color='#008ee0'>Aimpoint CompM2 Tan</t>");
        //ADD_SCOPE(RH_compM21_tan, "<t color='#008ee0'>Aimpoint CompM2 Tan Low</t>");

        ADD_SCOPE(RH_t1,         "<t color='#e05200'>Aimpoint T1</t>");
        ADD_SCOPE(RH_t1_tan,     "<t color='#e05200'>Aimpoint T1 Tan</t>");
        ADD_SCOPE(RH_barska_rds, "<t color='#e05200'>Barska RDS</t>");
        ADD_SCOPE(RH_cmore,      "<t color='#e05200'>C-More RDS</t>");

        ADD_SCOPE(RH_eotech553,     "<t color='#008ee0'>Eotech 553</t>");
        ADD_SCOPE(RH_eotech553_tan, "<t color='#008ee0'>Eotech 553 Tan</t>");
        ADD_SCOPE(RH_LTdocter,      "<t color='#008ee0'>Larue Docter</t>");
        //ADD_SCOPE(RH_LTdocter1,     "<t color='#008ee0'>Larue Docter low</t>");

        ADD_SCOPE(rhsusf_acc_eotech_552, "<t color='#e05200'>M552 CCO</t>");
        ADD_SCOPE(rhsusf_acc_compm4,     "<t color='#e05200'>M68 CCO</t>");
        ADD_SCOPE(optic_holosight,       "<t color='#e05200'>Mk17 Holosight</t>");
        ADD_SCOPE(optic_holosight_smg,   "<t color='#e05200'>Mk17 Holosight SMG</t>");

        //ADD_SCOPE(RH_refles,         "<t color='#008ee0'>Trijicon Reflex</t>");
        ADD_SCOPE(rhsusf_acc_eotech, "<t color='#008ee0'>XPS3</t>");
        ADD_SCOPE(RH_zpoint,         "<t color='#008ee0'>Zeiss Z-point</t>");
    };
    ace_cargo_canLoad = 0;
    ace_dragging_canCarry = 0;
    ace_dragging_canDrag = 0;
    class EventHandlers : EventHandlers {
        class deprecated_warn {
            init = "[] call cnto_units_fnc_warnDeprecated";
        };
    };
};
