#include "\cnto\units\shared\weap_linked.h"

class hlc_rifle_SAMR;
class cnto_tfn_samr_flash : hlc_rifle_SAMR {
    scope = 1;
    class LinkedItems { side(acc_flashlight); };
};

class rhs_weap_hk416d10_LMT;
class cnto_tfn_416_flash : rhs_weap_hk416d10_LMT {
    scope = 1;
    class LinkedItems { side(acc_flashlight); };
};

class rhs_weap_hk416d145_m320;
class cnto_tfn_416_gl_flash : rhs_weap_hk416d145_m320 {
    scope = 1;
    class LinkedItems { side(acc_flashlight); };
};

class rhs_weap_m249_pip_S_vfg;
class cnto_tfn_m249_flash : rhs_weap_m249_pip_S_vfg {
    scope = 1;
    class LinkedItems { side(acc_flashlight); };
};

class tf47_m3maaws;
class cnto_tfn_m3maaws_optic : tf47_m3maaws {
    scope = 1;
    class LinkedItems { optic(tf47_optic_m3maaws); };
};
