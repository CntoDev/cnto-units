/*
 * "join" macros as you can't use ## or connect defines with literal strings
 * without using a macro
 */

#define JOIN2(a,b) a##b
#define JOIN3(a,b,c) a##b##c
#define JOIN4(a,b,c,d) a##b##c##d
#define JOIN5(a,b,c,d,e) a##b##c##d##e
#define JOIN6(a,b,c,d,e,f) a##b##c##d##e##f
#define JOIN7(a,b,c,d,e,f,g) a##b##c##d##e##f##g
#define JOIN8(a,b,c,d,e,f,g,h) a##b##c##d##e##f##g##h
#define JOIN9(a,b,c,d,e,f,g,h,i) a##b##c##d##e##f##g##h##i
