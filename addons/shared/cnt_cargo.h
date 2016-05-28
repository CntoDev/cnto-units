/*
 * "count" / "times" macros for cargo-type objects specifically (which
 * have an alternate syntax to soldier-based weapons/mags/items
 */

/* for some reason, preprocessor concatenation doesn't work in class names,
 * so just use the item 'id' as class name */
#define xweaps(cnt, id) class id { weapon = id; count = cnt; }
#define xmags(cnt, id) class id { magazine = id; count = cnt; }
#define xitems(cnt, id) class id { name = id; count = cnt; }
#define xbackpacks(cnt, id) class id { backpack = id; count = cnt; }
