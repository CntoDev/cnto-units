/* keep only own map markers - locally delete any user-created markers */
0 = [] spawn {
    waitUntil {
        {
            deleteMarkerLocal _x;
        } forEach (allMapMarkers select { _x find "_USER_DEFINED" != -1 });
        false;
    };
};

/* disable swt markers beyond the briefing screen */
0 = [] spawn {
    private _disable_swt = {
        /* MouseButtonDown also breaks ACE pointing, but we cannot leave it
         * enabled as it would allow players to use ctrl/alt/shift click to
         * create series of global dots
         *   -- swt uses spawn in preInit, so do a small loop, just in case */
        private _ctrl = _this displayCtrl 51;
        /* big hammer overkill, but SWT hardcodes a piece of CODE
         * into at least DblClick, not a function call, sadly */
        for "_i" from 0 to 30 do {
            { _ctrl ctrlRemoveAllEventHandlers _x } forEach
                ["MouseButtonDblClick"];
                //"MouseButtonDown",
                //"MouseButtonUp",
                //"MouseHolding"

            /* disable double-click marker placement (vanilla) */
            _ctrl ctrlAddEventHandler ["MouseButtonDblClick", {
                0 = [] spawn { (findDisplay 54) closeDisplay 2 };
                true;
            }];
            //TODO: ctrl-drag drawing, will be seen by other factions as
            //      we only delete it locally, deleteMarkerLocal :(

            swt_markers_MapMouseDown = { false };
            swt_markers_MapMouseUp = { false };
            swt_markers_MapKeyDown = { false };
            swt_markers_MapMouseMoving = { false };
            swt_markers_MapMouseHold = { false };
            swt_markers_MapMouseZ = { false };
            uiSleep 0.1;
        };
    };

    waitUntil { !isNull findDisplay 12 || !isNull findDisplay 37 || !isNull findDisplay 52 || !isNull findDisplay 53 };
    private _map = {
        if (!isNull findDisplay _x) exitWith { _x };
    } forEach [12, 37, 52, 53];

    disableSerialization;

    private _mapd = findDisplay _map;
    if (_map == 12) then {
        _mapd call _disable_swt;
    } else {
        _mapd call _disable_swt;
        sleep 1;  // waitUntil { time > 1 }
        waitUntil { !isNull findDisplay 12 };
        (findDisplay 12) call _disable_swt;
    };
};

/* disable the Delete key on map, preventing marker deletion */
/* not needed as re-creating the markers without _USER_DEFINED prevents removal
 * -- and we disable marker creation anyway */
#ifdef not_needed
0 = [] spawn {
    /* allow deletion on briefing screen, before game start */
    waitUntil { time > 0 };
    waitUntil { !isNull finddisplay 12 };

    /* returns true ("handled") if the key is Delete */
    (findDisplay 12) displayAddEventHandler ["KeyDown", {_this select 1 == 211}];
    // params to the EH: ctrl, dikCode, shift, ctrlKey, alt
};
#endif
