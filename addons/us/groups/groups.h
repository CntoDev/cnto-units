class High_Command {
    name = "High Command";
    class PLT_Lead {
        name = "PLT Lead";
        icon = "\A3\ui_f\data\map\markers\nato\b_hq.paa";
        class Unit0 { vehicle = cnto_us_plt_co_1;    position[] = {0,0,0}; rank = "MAJOR"; dir = 180; };
        class Unit1 { vehicle = cnto_us_plt_sgt_1;   position[] = {1,0,0}; rank = "CAPTAIN"; dir = 180; };
        class Unit2 { vehicle = cnto_us_plt_medic_1; position[] = {2,0,0}; rank = "PRIVATE"; dir = 180; };
        class Unit3 { vehicle = cnto_us_plt_rfl_1;   position[] = {3,0,0}; rank = "PRIVATE"; dir = 180; };
    };
};
class Infantry {
    name = "Infantry";
    class Alpha_SQ_Lead {
        name = "Alpha SQ Lead";
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
        class Unit0 { vehicle = cnto_us_sq_sl_asl;    position[] = {0,0,0}; rank = "LIEUTENANT"; dir = 180; };
        class Unit1 { vehicle = cnto_us_sq_medic_asl; position[] = {1,0,0}; rank = "PRIVATE"; dir = 180; };
    };
    class Alpha_1 {
        name = "Alpha 1";
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
        class Unit0 { vehicle = cnto_us_ft_tl_a1;  position[] = {0,0,0}; rank = "SERGEANT"; };
        class Unit1 { vehicle = cnto_us_ft_ar_a1;  position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = cnto_us_ft_aar_a1; position[] = {2,0,0}; rank = "CORPORAL"; };
        class Unit3 { vehicle = cnto_us_ft_at_a1;  position[] = {3,0,0}; rank = "PRIVATE"; };
    };
    class Alpha_2 {
        name = "Alpha 2";
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
        class Unit0 { vehicle = cnto_us_ft_tl_a2;  position[] = {0,0,0}; rank = "SERGEANT"; };
        class Unit1 { vehicle = cnto_us_ft_ar_a2;  position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = cnto_us_ft_aar_a2; position[] = {2,0,0}; rank = "CORPORAL"; };
        class Unit3 { vehicle = cnto_us_ft_at_a2;  position[] = {3,0,0}; rank = "PRIVATE"; };
    };
    class Alpha_3 {
        name = "Alpha 3";
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
        class Unit0 { vehicle = cnto_us_ft_tl_a3;  position[] = {0,0,0}; rank = "SERGEANT"; };
        class Unit1 { vehicle = cnto_us_ft_ar_a3;  position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = cnto_us_ft_aar_a3; position[] = {2,0,0}; rank = "CORPORAL"; };
        class Unit3 { vehicle = cnto_us_ft_at_a3;  position[] = {3,0,0}; rank = "PRIVATE"; };
    };
    class Bravo_SQ_Lead {
        name = "Bravo SQ Lead";
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
        class Unit0 { vehicle = cnto_us_sq_sl_bsl;    position[] = {0,0,0}; rank = "LIEUTENANT"; dir = 180; };
        class Unit1 { vehicle = cnto_us_sq_medic_bsl; position[] = {1,0,0}; rank = "PRIVATE"; dir = 180; };
    };
    class Bravo_1 {
        name = "Bravo 1";
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
        class Unit0 { vehicle = cnto_us_ft_tl_b1;  position[] = {0,0,0}; rank = "SERGEANT"; };
        class Unit1 { vehicle = cnto_us_ft_ar_b1;  position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = cnto_us_ft_aar_b1; position[] = {2,0,0}; rank = "CORPORAL"; };
        class Unit3 { vehicle = cnto_us_ft_at_b1;  position[] = {3,0,0}; rank = "PRIVATE"; };
    };
    class Bravo_2 {
        name = "Bravo 2";
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
        class Unit0 { vehicle = cnto_us_ft_tl_b2;  position[] = {0,0,0}; rank = "SERGEANT"; };
        class Unit1 { vehicle = cnto_us_ft_ar_b2;  position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = cnto_us_ft_aar_b2; position[] = {2,0,0}; rank = "CORPORAL"; };
        class Unit3 { vehicle = cnto_us_ft_at_b2;  position[] = {3,0,0}; rank = "PRIVATE"; };
    };
    class MMG {
        name = "MMG";
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
        class Unit0 { vehicle = cnto_us_mmg_tl_1;     position[] = {0,0,0}; rank = "SERGEANT"; };
        class Unit1 { vehicle = cnto_us_mmg_gunner_1; position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = cnto_us_mmg_bearer_1; position[] = {2,0,0}; rank = "PRIVATE"; };
    };
    class MAT {
        name = "MAT";
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
        class Unit0 { vehicle = cnto_us_mat_tl_1;     position[] = {0,0,0}; rank = "SERGEANT"; };
        class Unit1 { vehicle = cnto_us_mat_gunner_1; position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = cnto_us_mat_bearer_1; position[] = {2,0,0}; rank = "PRIVATE"; };
    };
    class Mortar {
        name = "Mortar";
        icon = "\A3\ui_f\data\map\markers\nato\b_mortar.paa";
        class Unit0 { vehicle = cnto_us_mortar_assist_1; position[] = {0,0,0}; rank = "SERGEANT"; };
        class Unit1 { vehicle = cnto_us_mortar_gunner_1; position[] = {1,0,0}; rank = "PRIVATE"; };
    };
    class Engineers {
        name = "Engineers";
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
        class Unit0 { vehicle = cnto_us_eng_tl_1; position[] = {0,0,0}; rank = "SERGEANT"; };
        class Unit1 { vehicle = cnto_us_eng_rfl_1; position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = cnto_us_eng_rfl_1; position[] = {2,0,0}; rank = "PRIVATE"; };
        class Unit3 { vehicle = cnto_us_eng_rfl_1; position[] = {3,0,0}; rank = "PRIVATE"; };
    };
};
class Crew {
    name = "Crew";
    class Dagger_1 {
        name = "Dagger 1";
        icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
        class Unit0 { vehicle = cnto_us_veh_co_1;     position[] = {0,0,0}; rank = "LIEUTENANT"; };
        class Unit1 { vehicle = cnto_us_veh_driver_1; position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = cnto_us_veh_gunner_1; position[] = {2,0,0}; rank = "CORPORAL"; };
    };
    class Dagger_2 {
        name = "Dagger 2";
        icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
        class Unit0 { vehicle = cnto_us_veh_co_2;     position[] = {0,0,0}; rank = "LIEUTENANT"; };
        class Unit1 { vehicle = cnto_us_veh_driver_2; position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = cnto_us_veh_gunner_2; position[] = {2,0,0}; rank = "CORPORAL"; };
    };
    class Dagger_3 {
        name = "Dagger 3";
        icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
        class Unit0 { vehicle = cnto_us_veh_co_3;     position[] = {0,0,0}; rank = "LIEUTENANT"; };
        class Unit1 { vehicle = cnto_us_veh_driver_3; position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = cnto_us_veh_gunner_3; position[] = {2,0,0}; rank = "CORPORAL"; };
    };
    class Thunder {
        name = "Thunder (Tank)";
        icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
        class Unit0 { vehicle = cnto_us_veh_co_4;     position[] = {0,0,0}; rank = "LIEUTENANT"; };
        class Unit1 { vehicle = cnto_us_veh_driver_4; position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = cnto_us_veh_gunner_4; position[] = {2,0,0}; rank = "CORPORAL"; };
    };
    class Nightbird_1 {
        name = "Nightbird 1";
        icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
        class Unit0 { vehicle = cnto_us_air_pilot_1;   position[] = {0,0,0}; rank = "LIEUTENANT"; };
        class Unit1 { vehicle = cnto_us_air_copilot_1; position[] = {1,0,0}; rank = "PRIVATE"; };
    };
    class Nightbird_2 {
        name = "Nightbird 2";
        icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
        class Unit0 { vehicle = cnto_us_air_pilot_2;   position[] = {0,0,0}; rank = "LIEUTENANT"; };
        class Unit1 { vehicle = cnto_us_air_copilot_2; position[] = {1,0,0}; rank = "PRIVATE"; };
    };
    class Nightbird_3 {
        name = "Nightbird 3";
        icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
        class Unit0 { vehicle = cnto_us_air_pilot_3;   position[] = {0,0,0}; rank = "LIEUTENANT"; };
        class Unit1 { vehicle = cnto_us_air_copilot_3; position[] = {1,0,0}; rank = "PRIVATE"; };
    };
    class Reaper {
        name = "Reaper (CAS)";
        icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
        class Unit0 { vehicle = cnto_us_air_pilot_4;   position[] = {0,0,0}; rank = "LIEUTENANT"; };
        class Unit1 { vehicle = cnto_us_air_copilot_4; position[] = {1,0,0}; rank = "PRIVATE"; };
    };
    class Wildcat {
        name = "Wildcat (Jet)";
        icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
        class Unit0 { vehicle = cnto_us_air_jetpilot_1;position[] = {0,0,0}; rank = "LIEUTENANT"; };
    };
};
class Special {
    name = "Special";
    class Trainer_Team {
        name = "Trainer Team";
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
        class Unit0 { vehicle = cnto_us_trainer_1; position[] = {0,0,0}; rank = "MAJOR"; dir = 180; };
        class Unit1 { vehicle = cnto_us_trainer_2; position[] = {1,0,0}; rank = "MAJOR"; dir = 180; };
        class Unit2 { vehicle = cnto_us_trainer_3; position[] = {2,0,0}; rank = "MAJOR"; dir = 180; };
        class Unit3 { vehicle = cnto_us_trainer_4; position[] = {3,0,0}; rank = "MAJOR"; dir = 180; };
    };
    class GM_Team {
        name = "GM Team";
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
        class Unit0 { vehicle = cnto_us_gm_1; position[] = {0,0,0}; rank = "COLONEL"; dir = 180; };
        class Unit1 { vehicle = cnto_us_gm_2; position[] = {1,0,0}; rank = "COLONEL"; dir = 180; };
    };
};
