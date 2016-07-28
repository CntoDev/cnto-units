/*
 * BIG NOTE:
 * - this file was disabled because there's currently (1.62) no way
 *   to re-create POLYLINE (user-drawn map lines) markers locally, as
 *   there is no command to get/set the polygon points,
 *   an alternate approach is used in the non-"unused" version
 */

/* make map markers local only, delete any newly user-created ones
 * and re-create them as local - iterating over all markers is
 * a resource-intensive operation, but there's no good alternative */
0 = [] spawn {
    /* leave briefing-time global / channel-specific */
    waitUntil { time > 0 };
    waitUntil {
        {
            private _text = markerText _x;
            private _pos = getMarkerPos _x;
            private _icon = getMarkerType _x;
            private _color = getMarkerColor _x;
            deleteMarker _x;

            /* generate suitable name based on position */
            private _newname = "mkr_" + ((str _pos) call BIS_fnc_filterString);
            private _new = createMarkerLocal [_newname, _pos];
            _new setMarkerTextLocal _text;
            _new setMarkerTypeLocal _icon;
            _new setMarkerColorLocal _color;
        } forEach (allMapMarkers select { _x find "_USER_DEFINED" != -1 });
        false;
    };
};

/* disable swt markers beyond the briefing screen */
0 = [] spawn {
    waitUntil { time > 0 };
    waitUntil { !isNull finddisplay 12 };

    disableSerialization;
    private _ctrl = (finddisplay 12) displayCtrl 51;
    if (isNull _ctrl) exitWith {};

    /* MouseButtonDown also breaks ACE pointing, but we cannot leave it
     * enabled as it would allow players to use ctrl/alt/shift click to
     * create series of global dots
     * -- actually, we can just empty out the swt functions here as they're
     *    defined in preInit and we run after time > 0
     *    -- swt uses spawn in preInit, so do a small loop, just in case */
    private _end = time + 3;
    waitUntil {
        /* big hammer overkill, but SWT hardcodes a piece of CODE
        * into at least DblClick, not a function call, sadly */
        { _ctrl ctrlRemoveAllEventHandlers _x } forEach
            ["MouseButtonDblClick"];
            //"MouseButtonDown",
            //"MouseButtonUp",
            //"MouseHolding"
        swt_markers_MapMouseDown = { false };
        swt_markers_MapMouseUp = { false };
        swt_markers_MapKeyDown = { false };
        swt_markers_MapMouseMoving = { false };
        swt_markers_MapMouseHold = { false };
        swt_markers_MapMouseZ = { false };
        _end < time;
    };
};

/* disable the Delete key on map, preventing marker deletion */
/* not needed as re-creating the markers without _USER_DEFINED prevents removal */
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
