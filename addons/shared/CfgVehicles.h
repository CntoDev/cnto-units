/*
 * Crates
 */

#define QUOTE(x) #x
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

class Land_PlasticCase_01_small_F;
class cnto_shared_scopebox : Land_PlasticCase_01_small_F {
    editorCategory = CNTO_Other;
    editorSubcategory = CNTO_Misc;
    displayName = "Scopebox";
    class UserActions {
        ADD_SCOPE(optic_Aco,         "<t color='#f00000'>ACO Red</t>");
        ADD_SCOPE(optic_ACO_grn,     "<t color='#f00000'>ACO Green</t>");
        ADD_SCOPE(optic_Aco_smg,     "<t color='#f00000'>ACO SMG Red</t>");
        ADD_SCOPE(optic_ACO_grn_smg, "<t color='#f00000'>ACO SMG Green</t>");

        ADD_SCOPE(rhsusf_acc_compm4, "<t color='#0000f0'>Aimpoint M68 CCO</t>");
        ADD_SCOPE(rhsusf_acc_M2A1,   "<t color='#0000f0'>Milkor M2A1 GL Sight</t>");

        ADD_SCOPE(optic_holosight,           "<t color='#00f0f0'>Mk17 Holosight</t>");
        ADD_SCOPE(optic_Holosight_blk_F,     "<t color='#00f0f0'>Mk17 Holosight (Black)</t>");
        ADD_SCOPE(optic_Holosight_khk_F,     "<t color='#00f0f0'>Mk17 Holosight (Khaki)</t>");
        ADD_SCOPE(optic_holosight_smg,       "<t color='#00f0f0'>Mk17 Holosight SMG</t>");
        ADD_SCOPE(optic_Holosight_smg_blk_F, "<t color='#00f0f0'>Mk17 Holosight SMG (Black)</t>");

        ADD_SCOPE(rhsusf_acc_eotech_552,   "<t color='#00f000'>Eotech M552 CCO</t>");
        ADD_SCOPE(rhsusf_acc_eotech_552_d, "<t color='#00f000'>Eotech M552 CCO (Desert)</t>");
        ADD_SCOPE(rhsusf_acc_eotech_xps3,  "<t color='#00f000'>Eotech XPS3 (dim)</t>");
    };
    ace_cargo_canLoad = 0;
    ace_dragging_canCarry = 0;
    ace_dragging_canDrag = 0;
};
