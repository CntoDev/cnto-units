/*
 * "count" / "times" macros for cargo-type objects specifically (which
 * have an alternate syntax to soldier-based weapons/mags/items
 */

/* as these can be used multiple times on the same id, try varying classnames
 * a bit using pseudorandom strings - cnt and __LINE__ */
#define xweaps(cnt, id) class id##cnt##__LINE__ { weapon = id; count = cnt; }
#define xmags(cnt, id) class id##cnt##__LINE__ { magazine = id; count = cnt; }
#define xitems(cnt, id) class id##cnt##__LINE__ { name = id; count = cnt; }
#define xbackpacks(cnt, id) class id##cnt##__LINE__ { backpack = id; count = cnt; }
