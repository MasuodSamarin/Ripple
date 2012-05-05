#include <ripple/ripple.h>

//RPP_CAT
#define MACRO() MACRO_
#define MACRO_CAT() CAT_SUCCESS
RPP_CAT(MACRO(), CAT)() // CAT_SUCCESS
#undef MACRO
#undef MACRO_CAT

//RPP_IIF
RPP_IIF(0)(FAIL, SUCCESS) // SUCCESS
RPP_IIF(1)(SUCCESS, FAIL) // SUCCESS

//RPP_INVOKER
#define MACRO(x) x
RPP_INVOKER(MACRO)
#undef MACRO 

//RPP_MACRO_INVOKE
#define MACRO(x) x
RPP_MACRO_INVOKE(MACRO, SUCCESS) //SUCCESS
RPP_INVOKE(MACRO, SUCCESS) //SUCCESS
#undef MACRO


//RPP_BIND_DATA
RPP_BIND_DATA_INVOKE(RPP_BIND_DATA(RPP_PRIMITIVE_CAT, CESS), SUC)// SUCCESS
RPP_INVOKE(RPP_BIND_DATA(RPP_PRIMITIVE_CAT, CESS), SUC)// SUCCESS

//RPP_DELINIEATE
#define MACRO(s, n, var) var ## n
#define COUNT(s, n) n
RPP_EXPR(RPP_DELINEATE(3, RPP_COMMA, COUNT)) // 0, 1, 2
RPP_EXPR(RPP_DELINEATE(3, RPP_EMPTY, RPP_BIND_DATA(MACRO, x))) // x0 x1 x2
RPP_EXPR(RPP_DELINEATE(3, RPP_COMMA,RPP_BIND_DATA(MACRO, y))) // y0, y1, y2
RPP_EXPR(RPP_DELINEATE(3, RPP_IDENTITY(+), RPP_BIND_DATA(MACRO, x))) // z0 + z1 + z2
#undef MACRO

//RPP_DELINEATE_FROM_TO
#define MACRO(s, n) n
RPP_EXPR(RPP_DELINEATE_FROM_TO(5, 10, RPP_IDENTITY(+), MACRO)) // 5 + 6 + 7 + 8 + 9
#undef MACRO

//RPP_DELINEATE_PARAMS
RPP_DELINEATE_PARAMS(3, RPP_COMMA, class T) // class T0, class T1, class T2
RPP_DELINEATE_PARAMS(3, RPP_COMMA, class T, = U) // class T0 = U0, class T1 = U1, class T2 = U2
RPP_DELINEATE_PARAMS(3, RPP_COMMA, class T, = void RPP_INTERCEPT) // class T0 = void, class T1 = void, class T2 = void

//RPP_FOR
#define PRED(s, x) RPP_BOOL(x)
#define OP(s, x) RPP_DEC(x)
#define MACRO(s, x) { x }
RPP_EXPR(RPP_FOR(PRED, OP, MACRO, 10)) // { 10 } { 9 } { 8 } { 7 } { 6 } { 5 } { 4 } { 3 } { 2 } { 1 } 
#undef PRED
#undef OP
#undef MACRO

