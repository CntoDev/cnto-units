#include "\cnto\units\shared\weap_linked.h"

class SMG_02_F;
class cnto_tfnsf_sting : SMG_02_F {
    scope = 1;
    class LinkedItems {
        optic(optic_Aco);
        muzzle(muzzle_snds_L);
        side(acc_pointer_IR);
    };
};

class arifle_Katiba_GL_F;
class cnto_tfnsf_katiba_gl : arifle_Katiba_GL_F {
    scope = 1;
    class LinkedItems {
        optic(optic_Aco);
        muzzle(RH_fa762);
        side(acc_pointer_IR);
    };
};

class arifle_Katiba_C_F;
class cnto_tfnsf_katiba_carb : arifle_Katiba_C_F {
    scope = 1;
    class LinkedItems {
        optic(optic_Aco);
        muzzle(RH_fa762);
        side(acc_pointer_IR);
    };
};

class hlc_rifle_m14sopmod;
class cnto_tfnsf_m14sopmod : hlc_rifle_m14sopmod {
    scope = 1;
    class LinkedItems {
        optic(rhsusf_acc_ACOG2_USMC);
        muzzle(hlc_muzzle_snds_M14);
        side(acc_pointer_IR);
        //under() doesn't seem to work
    };
};

class hlc_lmg_M60E4;
class cnto_tfnsf_m60 : hlc_lmg_M60E4 {
    scope = 1;
    class LinkedItems {
        optic(rhsusf_acc_ACOG2_USMC);
    };
};
