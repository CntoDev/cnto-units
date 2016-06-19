class Mission {
    class Scenario {
        class AttributeCategories {
            class CNTO_Checklist {
                displayName = "CNTO Mission Checklist";
                collapsed = 1;
                class Attributes {
                    class Units {
                        property = "cnto_chk_units";
                        displayName = "Place units/groups";
                        control = "Checkbox";
                        //expression = "";
                        tooltip = "Place down individual playable units (F1) or groups (F2) from any CNTO factions for all sides in the mission (one in Coop, multiple in PvP). Do not place any groups or assets that should be unavailable to players. If desired, create your own groups and assign them custom names / unit role descriptions (names).\n\nAlso place any other assets (like vehicles / helicopters) you want the players to have.";
                        defaultValue = "false";
                    };
                    class Respawn_Marker {
                        property = "cnto_chk_respawnmark";
                        displayName = "Place respawn marker(s)";
                        control = "Checkbox";
                        tooltip = "From the markers (F6) category, place down any marker you like and name it (in Variable Name) one of:\n\n- respawn - any side will respawn here\n- respawn_west - only BLUFOR will respawn here\n- respawn_east - OPFOR\n- respawn_guerilla - Independents\n- respawn_civilian - Civilians\n\nThese are prefixes, so you can use ie. respawn_west_blah, which is useful for multiple respawn positions (picked randomly). This is very easy to do by naming a marker ie. respawn_west and copy/pasting it, which creates copies named respawn_west_1, respawn_west_2, etc.\n\n***When you place all respawn markers, select them and change Alpha to 0%, making them invisible.***";
                        defaultValue = "false";
                    };
                    class Supplies {
                        property = "cnto_chk_supplies";
                        displayName = "Place supply boxes";
                        control = "Checkbox";
                        tooltip = "From the units (F1) Empty category, place down whatever resupplies you want the players to have. Optionally, place a map marker on the supplies to make them easy to find.";
                        defaultValue = "false";
                    };
                    class Viscom {
                        property = "cnto_chk_viscom";
                        displayName = "Place VISCOM";
                        control = "Checkbox";
                        tooltip = "From the groups (F2) Empty category, place down the VISCOM setup on a reasonably flat ground. If space is an issue, place down manually only one or more pieces (ie. laptop) from the VISCOM setup through units (F1) Empty category.";
                        defaultValue = "false";
                    };
                    class Start_Location {
                        property = "cnto_chk_startloc";
                        displayName = "Define starting location";
                        control = "Checkbox";
                        tooltip = "In editor modules (F5), under A3EE, place down custom location where players start (ie. one per each side in PvP), select a desirable name (ie. ""CNTO Forward Airbase"", ane resize it (Transformation category within its properties) to envelop the desired area. Check any checkbox options that you feel are appropriate.";
                        defaultValue = "false";
                    };
                    class Simple_Objects {
                        property = "cnto_chk_sobjects";
                        displayName = "Turn props into SimpleObjects";
                        control = "Checkbox";
                        tooltip = "Props like sandbags, barbed wire, but especially small decorative objects can be made into ""SimpleObjects"". This significantly reduces their performance impact, but makes them immovable and indestructible, which is mostly not a problem for Empty terrain or decorative objects.\n\nTo make an object into SimpleObject, see the A3EE category in its properties, all the way down.\n\n***Use this instead of disabling simulation, it has the same effect, but saves a lot more performance.***";
                        defaultValue = "false";
                    };
                    class Briefing {
                        property = "cnto_chk_briefing";
                        displayName = "Configure briefing";
                        control = "Checkbox";
                        tooltip = "From editor modules (F5), under A3EE, place down a briefing module and provide a written (text) briefing to players in respective sections of the module config.\n\nIf PvP, you can place one briefing module per side.";
                        defaultValue = "false";
                    };
                    class Mission_Defaults {
                        property = "cnto_chk_mdefaults";
                        displayName = "Set mission defaults";
                        control = "Checkbox";
                        tooltip = "In the main menu toolbar (above), in Tools, click one of ""Set CNTO defaults"" options. This sets the respawn options, timers, as well as any other mission-wide defaults.";
                        defaultValue = "false";
                    };
                    class Mission_Details {
                        property = "cnto_chk_mdetails";
                        displayName = "Set mission details";
                        control = "Checkbox";
                        tooltip = "In the main menu toolbar (above), in Attributes, go through ""General"" (mision title+author, overview picture+text, independents allegiance) and ""Environment"" (date and weather).";
                        defaultValue = "false";
                    };
                    class Notes {
                        property = "cnto_chk_notes";
                        displayName = "Notes";
                        control = "EditMulti5";
                        tooltip = "Optionally enter any additional notes for reviewers or other people editing this mission.";
                        defaultValue = """""";
                    };
                };
            };
        };
    };
};
