#include "\cnto\units\shared\weap_linked.h"

class hlc_rifle_g3ka4;
class cnto_col_g3_flash : hlc_rifle_g3ka4 {
    scope = 1;
    class LinkedItems { side(RH_SFM952V); };
};

class HLC_Rifle_g3ka4_GL;
class cnto_col_g3_gl_flash : HLC_Rifle_g3ka4_GL {
    scope = 1;
    class LinkedItems { side(RH_SFM952V); };
};

class hlc_m249_SQuantoon;
class cnto_col_m249 : hlc_m249_SQuantoon {
    scope = 1;
    class LinkedItems { side(RH_SFM952V); };
};

class rhs_weap_rpg7;
class cnto_col_rpg7_optic : rhs_weap_rpg7 {
    scope = 1;
    class LinkedItems { optic(rhs_acc_pgo7v); };
};
