class High_Command {
    name = "High Command";
    class PLT_Lead {
        name = "PLT Lead";
        icon = "\A3\ui_f\data\map\markers\nato\n_hq.paa";
        class Unit0 { vehicle = cnto_tfn_plt_co_1;    position[] = {0,0,0}; rank = "MAJOR"; dir = 180; };
        class Unit1 { vehicle = cnto_tfn_plt_sgt_1;   position[] = {1,0,0}; rank = "CAPTAIN"; dir = 180; };
        class Unit2 { vehicle = cnto_tfn_plt_medic_1; position[] = {2,0,0}; rank = "PRIVATE"; dir = 180; };
        class Unit3 { vehicle = cnto_tfn_plt_rfl_1;   position[] = {3,0,0}; rank = "PRIVATE"; dir = 180; };
    };
};
class Infantry {
    name = "Infantry";
    class Templar_SQ_Lead {
        name = "Templar SQ Lead";
        icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
        class Unit0 { vehicle = cnto_tfn_sq_sl_tsl;    position[] = {0,0,0}; rank = "LIEUTENANT"; dir = 180; };
        class Unit1 { vehicle = cnto_tfn_sq_medic_tsl; position[] = {1,0,0}; rank = "PRIVATE"; dir = 180; };
    };
    class Templar_1 {
        name = "Templar 1";
        icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
        class Unit0 { vehicle = cnto_tfn_ft_tl_t1;  position[] = {0,0,0}; rank = "SERGEANT"; };
        class Unit1 { vehicle = cnto_tfn_ft_ar_t1;  position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = cnto_tfn_ft_aar_t1; position[] = {2,0,0}; rank = "CORPORAL"; };
        class Unit3 { vehicle = cnto_tfn_ft_at_t1;  position[] = {3,0,0}; rank = "PRIVATE"; };
    };
    class Templar_2 {
        name = "Templar 2";
        icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
        class Unit0 { vehicle = cnto_tfn_ft_tl_t2;  position[] = {0,0,0}; rank = "SERGEANT"; };
        class Unit1 { vehicle = cnto_tfn_ft_ar_t2;  position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = cnto_tfn_ft_aar_t2; position[] = {2,0,0}; rank = "CORPORAL"; };
        class Unit3 { vehicle = cnto_tfn_ft_at_t2;  position[] = {3,0,0}; rank = "PRIVATE"; };
    };
    class Templar_3 {
        name = "Templar 3";
        icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
        class Unit0 { vehicle = cnto_tfn_ft_tl_t3;  position[] = {0,0,0}; rank = "SERGEANT"; };
        class Unit1 { vehicle = cnto_tfn_ft_ar_t3;  position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = cnto_tfn_ft_aar_t3; position[] = {2,0,0}; rank = "CORPORAL"; };
        class Unit3 { vehicle = cnto_tfn_ft_at_t3;  position[] = {3,0,0}; rank = "PRIVATE"; };
    };
    class Lancer_SQ_Lead {
        name = "Lancer SQ Lead";
        icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
        class Unit0 { vehicle = cnto_tfn_sq_sl_lsl;    position[] = {0,0,0}; rank = "LIEUTENANT"; dir = 180; };
        class Unit1 { vehicle = cnto_tfn_sq_medic_lsl; position[] = {1,0,0}; rank = "PRIVATE"; dir = 180; };
    };
    class Lancer_1 {
        name = "Lancer 1";
        icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
        class Unit0 { vehicle = cnto_tfn_ft_tl_l1;  position[] = {0,0,0}; rank = "SERGEANT"; };
        class Unit1 { vehicle = cnto_tfn_ft_ar_l1;  position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = cnto_tfn_ft_aar_l1; position[] = {2,0,0}; rank = "CORPORAL"; };
        class Unit3 { vehicle = cnto_tfn_ft_at_l1;  position[] = {3,0,0}; rank = "PRIVATE"; };
    };
    class Lancer_2 {
        name = "Lancer 2";
        icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
        class Unit0 { vehicle = cnto_tfn_ft_tl_l2;  position[] = {0,0,0}; rank = "SERGEANT"; };
        class Unit1 { vehicle = cnto_tfn_ft_ar_l2;  position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = cnto_tfn_ft_aar_l2; position[] = {2,0,0}; rank = "CORPORAL"; };
        class Unit3 { vehicle = cnto_tfn_ft_at_l2;  position[] = {3,0,0}; rank = "PRIVATE"; };
    };
    class MMG {
        name = "MMG";
        icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
        class Unit0 { vehicle = cnto_tfn_mmg_tl_1;     position[] = {0,0,0}; rank = "SERGEANT"; };
        class Unit1 { vehicle = cnto_tfn_mmg_gunner_1; position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = cnto_tfn_mmg_bearer_1; position[] = {2,0,0}; rank = "PRIVATE"; };
    };
    class MAT {
        name = "MAT";
        icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
        class Unit0 { vehicle = cnto_tfn_mat_tl_1;     position[] = {0,0,0}; rank = "SERGEANT"; };
        class Unit1 { vehicle = cnto_tfn_mat_gunner_1; position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = cnto_tfn_mat_bearer_1; position[] = {2,0,0}; rank = "PRIVATE"; };
    };
    class Mortar {
        name = "Mortar";
        icon = "\A3\ui_f\data\map\markers\nato\n_mortar.paa";
        class Unit0 { vehicle = cnto_tfn_mortar_gunner_1; position[] = {0,0,0}; rank = "SERGEANT"; };
        class Unit1 { vehicle = cnto_tfn_mortar_assist_1; position[] = {1,0,0}; rank = "PRIVATE"; };
    };
};
class Crew {
    name = "Crew";
    class Axe_1 {
        name = "Axe 1";
        icon = "\A3\ui_f\data\map\markers\nato\n_armor.paa";
        class Unit0 { vehicle = cnto_tfn_veh_co_1;     position[] = {0,0,0}; rank = "LIEUTENANT"; };
        class Unit1 { vehicle = cnto_tfn_veh_driver_1; position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = cnto_tfn_veh_gunner_1; position[] = {2,0,0}; rank = "CORPORAL"; };
    };
    class Axe_2 {
        name = "Axe 2";
        icon = "\A3\ui_f\data\map\markers\nato\n_armor.paa";
        class Unit0 { vehicle = cnto_tfn_veh_co_2;     position[] = {0,0,0}; rank = "LIEUTENANT"; };
        class Unit1 { vehicle = cnto_tfn_veh_driver_2; position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = cnto_tfn_veh_gunner_2; position[] = {2,0,0}; rank = "CORPORAL"; };
    };
    class Axe_3 {
        name = "Axe 3";
        icon = "\A3\ui_f\data\map\markers\nato\n_armor.paa";
        class Unit0 { vehicle = cnto_tfn_veh_co_3;     position[] = {0,0,0}; rank = "LIEUTENANT"; };
        class Unit1 { vehicle = cnto_tfn_veh_driver_3; position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = cnto_tfn_veh_gunner_3; position[] = {2,0,0}; rank = "CORPORAL"; };
    };
    class Knight {
        name = "Knight (Tank)";
        icon = "\A3\ui_f\data\map\markers\nato\n_armor.paa";
        class Unit0 { vehicle = cnto_tfn_veh_co_4;     position[] = {0,0,0}; rank = "LIEUTENANT"; };
        class Unit1 { vehicle = cnto_tfn_veh_driver_4; position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = cnto_tfn_veh_gunner_4; position[] = {2,0,0}; rank = "CORPORAL"; };
    };
    class Rapier_1 {
        name = "Rapier 1";
        icon = "\A3\ui_f\data\map\markers\nato\n_air.paa";
        class Unit0 { vehicle = cnto_tfn_air_pilot_1;   position[] = {0,0,0}; rank = "LIEUTENANT"; };
        class Unit1 { vehicle = cnto_tfn_air_copilot_1; position[] = {1,0,0}; rank = "PRIVATE"; };
    };
    class Rapier_2 {
        name = "Rapier 2";
        icon = "\A3\ui_f\data\map\markers\nato\n_air.paa";
        class Unit0 { vehicle = cnto_tfn_air_pilot_2;   position[] = {0,0,0}; rank = "LIEUTENANT"; };
        class Unit1 { vehicle = cnto_tfn_air_copilot_2; position[] = {1,0,0}; rank = "PRIVATE"; };
    };
    class Rapier_3 {
        name = "Rapier 3";
        icon = "\A3\ui_f\data\map\markers\nato\n_air.paa";
        class Unit0 { vehicle = cnto_tfn_air_pilot_3;   position[] = {0,0,0}; rank = "LIEUTENANT"; };
        class Unit1 { vehicle = cnto_tfn_air_copilot_3; position[] = {1,0,0}; rank = "PRIVATE"; };
    };
    class Archer {
        name = "Archer (CAS)";
        icon = "\A3\ui_f\data\map\markers\nato\n_air.paa";
        class Unit0 { vehicle = cnto_tfn_air_pilot_4;   position[] = {0,0,0}; rank = "LIEUTENANT"; };
        class Unit1 { vehicle = cnto_tfn_air_copilot_4; position[] = {1,0,0}; rank = "PRIVATE"; };
    };
};
class Special {
    name = "Special";
    class Trainer_Team {
        name = "Trainer Team";
        icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
        class Unit0 { vehicle = cnto_tfn_trainer_1; position[] = {0,0,0}; rank = "MAJOR"; dir = 180; };
        class Unit1 { vehicle = cnto_tfn_trainer_2; position[] = {1,0,0}; rank = "MAJOR"; dir = 180; };
        class Unit2 { vehicle = cnto_tfn_trainer_3; position[] = {2,0,0}; rank = "MAJOR"; dir = 180; };
        class Unit3 { vehicle = cnto_tfn_trainer_4; position[] = {3,0,0}; rank = "MAJOR"; dir = 180; };
    };
    class GM_Team {
        name = "GM Team";
        icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
        class Unit0 { vehicle = cnto_tfn_gm_1; position[] = {0,0,0}; rank = "COLONEL"; dir = 180; };
        class Unit1 { vehicle = cnto_tfn_gm_2; position[] = {1,0,0}; rank = "COLONEL"; dir = 180; };
    };
};
