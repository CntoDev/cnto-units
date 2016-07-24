class CfgPatches {
    class cnto_units_multiside_uniforms {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"A3_Characters_F"};
        /* others don't need to depend on us */
        addonRootClass = "A3_Characters_F";
    };
};

/*
 * since Arma3 hard-codes uniform sides to soldiers linked via ItemInfo of
 * given uniforms, it is normally impossible to wear a uniform destined for
 * some other side (on a config-defined soldier)
 *
 * however we can work around that by re-defining the soldiers linked in the
 * uniforms, to accept any side - this will affect the uniform no matter what
 * soldier actually uses it in the end
 */

/*
 * to add a new uniform:
 *
 * 1) look up its class in CfgWeapons and under that class, see ItemInfo
 *    subclass for the "uniformClass" member - this is the CfgVehicles
 *    class of the soldier you need to "fix"
 *
 * 2) just use the uniform in your soldier configs, with its original name,
 *    only now any side will be able to wear it
 *
 * YOU DO NOT NEED TO DEPEND ON THIS ADDON TO USE THE MODIFIED UNIFORMS,
 * JUST DEPEND ON WHEREVER THE ORIGINAL IS DEFINED IN
 */

#define FIX_SOLDIER(classname, parent) \
    class classname : parent { modelSides[] = {3,2,1,0}; }

class CfgVehicles {
    class B_Soldier_base_F;
    class C_man_1;

    /* uniforms for "ff" faction */
    FIX_SOLDIER(B_RangeMaster_F, B_Soldier_base_F);
    FIX_SOLDIER(C_Marshal_F, B_RangeMaster_F);
    FIX_SOLDIER(B_Competitor_F, B_RangeMaster_F);
    FIX_SOLDIER(C_man_polo_1_F, C_man_1);
    FIX_SOLDIER(C_man_polo_2_F, C_man_polo_1_F);
    FIX_SOLDIER(C_man_polo_3_F, C_man_polo_1_F);
    FIX_SOLDIER(C_man_polo_4_F, C_man_polo_1_F);
    FIX_SOLDIER(C_man_polo_5_F, C_man_polo_1_F);
    FIX_SOLDIER(C_man_polo_6_F, C_man_polo_1_F);
    FIX_SOLDIER(C_Orestes, C_man_1);
    FIX_SOLDIER(C_journalist_F, C_man_1);
    FIX_SOLDIER(C_man_p_fugitive_F, C_man_1);
    FIX_SOLDIER(C_man_hunter_1_F, C_man_1);
    FIX_SOLDIER(C_man_w_worker_F, C_man_1);
    class I_G_Soldier_LAT_F;
    FIX_SOLDIER(B_G_Soldier_LAT_F, I_G_Soldier_LAT_F);
    class I_G_Soldier_F;
    FIX_SOLDIER(B_G_Soldier_F, I_G_Soldier_F);
    FIX_SOLDIER(I_G_Story_Protagonist_F, B_G_Soldier_F);
    class I_G_Soldier_AR_F;
    FIX_SOLDIER(B_G_Soldier_AR_F, I_G_Soldier_AR_F);
    class I_G_engineer_F;
    FIX_SOLDIER(B_G_engineer_F, I_G_engineer_F);
    class I_G_medic_F;
    FIX_SOLDIER(B_G_medic_F, I_G_medic_F);
    class I_G_Soldier_M_F;
    FIX_SOLDIER(B_G_Soldier_M_F, I_G_Soldier_M_F);
    class I_G_Soldier_TL_F;
    FIX_SOLDIER(B_G_Soldier_TL_F, I_G_Soldier_TL_F);
    FIX_SOLDIER(b_soldier_survival_F, B_Soldier_base_F);
};
