class High_Command {
    name = "High Command";
    class Coy_Comd {
        name = "Coy Comd";
        icon = "\A3\ui_f\data\map\markers\nato\o_hq.paa";
        class Unit0 { vehicle = cnto_sptz_coy_co_1;    position[] = {0,0,0}; rank = "MAJOR"; dir = 180; };
        class Unit1 { vehicle = cnto_sptz_coy_sgt_1;   position[] = {1,0,0}; rank = "CAPTAIN"; dir = 180; };
        class Unit2 { vehicle = cnto_sptz_coy_medic_1; position[] = {2,0,0}; rank = "PRIVATE"; dir = 180; };
        class Unit3 { vehicle = cnto_sptz_coy_rfl_1;   position[] = {3,0,0}; rank = "PRIVATE"; dir = 180; };
    };
};
class Infantry {
    name = "Infantry";
    class Sokol_SQ_Lead {
        name = "Sokol SQ Lead";
        icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
        class Unit0 { vehicle = cnto_sptz_sq_sl_ssl;    position[] = {0,0,0}; rank = "LIEUTENANT"; dir = 180; };
        class Unit1 { vehicle = cnto_sptz_sq_medic_ssl; position[] = {1,0,0}; rank = "PRIVATE"; dir = 180; };
    };
    class Sokol_1 {
        name = "Sokol 1";
        icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
        class Unit0 { vehicle = cnto_sptz_ft_tl_s1;  position[] = {0,0,0}; rank = "SERGEANT"; };
        class Unit1 { vehicle = cnto_sptz_ft_ar_s1;  position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = cnto_sptz_ft_aar_s1; position[] = {2,0,0}; rank = "CORPORAL"; };
        class Unit3 { vehicle = cnto_sptz_ft_at_s1;  position[] = {3,0,0}; rank = "PRIVATE"; };
    };
    class Sokol_2 {
        name = "Sokol 2";
        icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
        class Unit0 { vehicle = cnto_sptz_ft_tl_s2;  position[] = {0,0,0}; rank = "SERGEANT"; };
        class Unit1 { vehicle = cnto_sptz_ft_ar_s2;  position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = cnto_sptz_ft_aar_s2; position[] = {2,0,0}; rank = "CORPORAL"; };
        class Unit3 { vehicle = cnto_sptz_ft_at_s2;  position[] = {3,0,0}; rank = "PRIVATE"; };
    };
    class Sokol_3 {
        name = "Sokol 3";
        icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
        class Unit0 { vehicle = cnto_sptz_ft_tl_s3;  position[] = {0,0,0}; rank = "SERGEANT"; };
        class Unit1 { vehicle = cnto_sptz_ft_ar_s3;  position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = cnto_sptz_ft_aar_s3; position[] = {2,0,0}; rank = "CORPORAL"; };
        class Unit3 { vehicle = cnto_sptz_ft_at_s3;  position[] = {3,0,0}; rank = "PRIVATE"; };
    };
    class Orel_SQ_Lead {
        name = "Orel SQ Lead";
        icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
        class Unit0 { vehicle = cnto_sptz_sq_sl_osl;    position[] = {0,0,0}; rank = "LIEUTENANT"; dir = 180; };
        class Unit1 { vehicle = cnto_sptz_sq_medic_osl; position[] = {1,0,0}; rank = "PRIVATE"; dir = 180; };
    };
    class Orel_1 {
        name = "Orel 1";
        icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
        class Unit0 { vehicle = cnto_sptz_ft_tl_o1;  position[] = {0,0,0}; rank = "SERGEANT"; };
        class Unit1 { vehicle = cnto_sptz_ft_ar_o1;  position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = cnto_sptz_ft_aar_o1; position[] = {2,0,0}; rank = "CORPORAL"; };
        class Unit3 { vehicle = cnto_sptz_ft_at_o1;  position[] = {3,0,0}; rank = "PRIVATE"; };
    };
    class Orel_2 {
        name = "Orel 2";
        icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
        class Unit0 { vehicle = cnto_sptz_ft_tl_o2;  position[] = {0,0,0}; rank = "SERGEANT"; };
        class Unit1 { vehicle = cnto_sptz_ft_ar_o2;  position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = cnto_sptz_ft_aar_o2; position[] = {2,0,0}; rank = "CORPORAL"; };
        class Unit3 { vehicle = cnto_sptz_ft_at_o2;  position[] = {3,0,0}; rank = "PRIVATE"; };
    };
    class MMG {
        name = "MMG";
        icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
        class Unit0 { vehicle = cnto_sptz_mmg_tl_1;     position[] = {0,0,0}; rank = "SERGEANT"; };
        class Unit1 { vehicle = cnto_sptz_mmg_gunner_1; position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = cnto_sptz_mmg_bearer_1; position[] = {2,0,0}; rank = "PRIVATE"; };
    };
    class MAT {
        name = "MAT";
        icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
        class Unit0 { vehicle = cnto_sptz_mat_tl_1;     position[] = {0,0,0}; rank = "SERGEANT"; };
        class Unit1 { vehicle = cnto_sptz_mat_gunner_1; position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = cnto_sptz_mat_bearer_1; position[] = {2,0,0}; rank = "PRIVATE"; };
    };
    class Mortar {
        name = "Mortar";
        icon = "\A3\ui_f\data\map\markers\nato\o_mortar.paa";
        class Unit0 { vehicle = cnto_sptz_mortar_gunner_1; position[] = {0,0,0}; rank = "SERGEANT"; };
        class Unit1 { vehicle = cnto_sptz_mortar_assist_1; position[] = {1,0,0}; rank = "PRIVATE"; };
    };
};
class Crew {
    name = "Crew";
    class Grozney_1 {
        name = "Grozney 1";
        icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
        class Unit0 { vehicle = cnto_sptz_veh_co_1;     position[] = {0,0,0}; rank = "LIEUTENANT"; };
        class Unit1 { vehicle = cnto_sptz_veh_driver_1; position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = cnto_sptz_veh_gunner_1; position[] = {2,0,0}; rank = "CORPORAL"; };
    };
    class Grozney_2 {
        name = "Grozney 2";
        icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
        class Unit0 { vehicle = cnto_sptz_veh_co_2;     position[] = {0,0,0}; rank = "LIEUTENANT"; };
        class Unit1 { vehicle = cnto_sptz_veh_driver_2; position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = cnto_sptz_veh_gunner_2; position[] = {2,0,0}; rank = "CORPORAL"; };
    };
    class Grozney_3 {
        name = "Grozney 3";
        icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
        class Unit0 { vehicle = cnto_sptz_veh_co_3;     position[] = {0,0,0}; rank = "LIEUTENANT"; };
        class Unit1 { vehicle = cnto_sptz_veh_driver_3; position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = cnto_sptz_veh_gunner_3; position[] = {2,0,0}; rank = "CORPORAL"; };
    };
    class Armata {
        name = "Armata (Tank)";
        icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
        class Unit0 { vehicle = cnto_sptz_veh_co_4;     position[] = {0,0,0}; rank = "LIEUTENANT"; };
        class Unit1 { vehicle = cnto_sptz_veh_driver_4; position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = cnto_sptz_veh_gunner_4; position[] = {2,0,0}; rank = "CORPORAL"; };
    };
    class Yastreo_1 {
        name = "Yastreb 1";
        icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
        class Unit0 { vehicle = cnto_sptz_air_pilot_1;   position[] = {0,0,0}; rank = "LIEUTENANT"; };
        class Unit1 { vehicle = cnto_sptz_air_copilot_1; position[] = {1,0,0}; rank = "PRIVATE"; };
    };
    class Yastreo_2 {
        name = "Yastreb 2";
        icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
        class Unit0 { vehicle = cnto_sptz_air_pilot_2;   position[] = {0,0,0}; rank = "LIEUTENANT"; };
        class Unit1 { vehicle = cnto_sptz_air_copilot_2; position[] = {1,0,0}; rank = "PRIVATE"; };
    };
    class Yastreo_3 {
        name = "Yastreb 3";
        icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
        class Unit0 { vehicle = cnto_sptz_air_pilot_3;   position[] = {0,0,0}; rank = "LIEUTENANT"; };
        class Unit1 { vehicle = cnto_sptz_air_copilot_3; position[] = {1,0,0}; rank = "PRIVATE"; };
    };
    class Sova {
        name = "Sova (CAS)";
        icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
        class Unit0 { vehicle = cnto_sptz_air_pilot_4;   position[] = {0,0,0}; rank = "LIEUTENANT"; };
        class Unit1 { vehicle = cnto_sptz_air_copilot_4; position[] = {1,0,0}; rank = "PRIVATE"; };
    };
};
class Special {
    name = "Special";
    class Trainer_Team {
        name = "Trainer Team";
        icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
        class Unit0 { vehicle = cnto_sptz_trainer_1; position[] = {0,0,0}; rank = "MAJOR"; dir = 180; };
        class Unit1 { vehicle = cnto_sptz_trainer_2; position[] = {1,0,0}; rank = "MAJOR"; dir = 180; };
        class Unit2 { vehicle = cnto_sptz_trainer_3; position[] = {2,0,0}; rank = "MAJOR"; dir = 180; };
        class Unit3 { vehicle = cnto_sptz_trainer_4; position[] = {3,0,0}; rank = "MAJOR"; dir = 180; };
    };
    class GM_Team {
        name = "GM Team";
        icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
        class Unit0 { vehicle = cnto_sptz_gm_1; position[] = {0,0,0}; rank = "COLONEL"; dir = 180; };
        class Unit1 { vehicle = cnto_sptz_gm_2; position[] = {1,0,0}; rank = "COLONEL"; dir = 180; };
    };
};
