class rhs_weap_rpg7;
class cnto_col_rpg7_optic : rhs_weap_rpg7 {
    scope = 1;
    class LinkedItems { optic(rhs_acc_pgo7v); };
};

class hlc_rifle_PSG1A1_RIS;
class cnto_col_psg_optic_bipod : hlc_rifle_PSG1A1_RIS {
    scope = 1;
    class LinkedItems {
        optic(optic_SOS);
        under(bipod_02_F_blk);
    };
};
