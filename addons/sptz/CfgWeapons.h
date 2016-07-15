#include "\cnto\units\shared\weap_linked.h"

class rhs_weap_ak74m_camo_npz;
class cnto_sptz_ak74m_flash : rhs_weap_ak74m_camo_npz {
    scope = 1;
    class LinkedItems { side(rhs_acc_2dpZenit); };
};

class rhs_weap_ak74m_gp25_npz;
class cnto_sptz_ak74m_gl : rhs_weap_ak74m_gp25_npz {
    scope = 1;
    class LinkedItems { side(rhs_acc_dtk3); };
};

class rhs_weap_rpg7;
class cnto_sptz_rpg7_optic : rhs_weap_rpg7 {
    scope = 1;
    class LinkedItems { optic(rhs_acc_pgo7v); };
};
