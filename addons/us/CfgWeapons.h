class tf47_m3maaws;
class cnto_us_m3maaws_optic : tf47_m3maaws {
    scope = 1;
    class LinkedItems { optic(tf47_optic_m3maaws); };
};

class rhs_weap_sr25_ec_d;
class cnto_us_sr25_optic_bipod : rhs_weap_sr25_ec_d {
    scope = 1;
    class LinkedItems {
        optic(optic_DMS);
        under(bipod_02_F_hex);
    };
};
