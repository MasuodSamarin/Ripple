/* ********************************************************************
 *                                                                    *
 *    (C) Copyright Paul Fultz II 2012.                               *
 *                                                                    *
 *    Distributed under the Boost Software License, Version 1.0.      *
 *    (See accompanying file LICENSE).                                *
 *                                                                    *
 *    See http://github.com/pfultz2/Ripple for most recent version.   *
 *                                                                    *
 ******************************************************************** */

#ifndef RIPPLE_PREPROCESSOR_REPETITION_H
#define RIPPLE_PREPROCESSOR_REPETITION_H
#include <ripple/config.h>
#include <ripple/basic.h>
#include <ripple/recursion.h>


// #define REPEAT_S(s, n, m, ...) \
//         REPEAT_I(OBSTRUCT(), INC(s), DEC(n), m, __VA_ARGS__)
// //This is the implementation
// #define REPEAT_INDIRECT() REPEAT_S
// #define REPEAT_I(_, s, n, m, ...) \
//         WHEN _(n) \
//         ( \
//             EXPR_S _(s)(REPEAT_INDIRECT _()(s, n, m, __VA_ARGS__) ) \
//         ) \
//         m _(s, n, __VA_ARGS__)



#define RPP_DELINEATE(n, sep, m) RPP_DELINEATE_S(RPP_STATE(), n, sep, m)
#define RPP_DELINEATE_S(s, n, sep, m) DETAIL_RPP_DELINEATE_U(s, n, sep, m, RPP_INVOKER(m))


#define DETAIL_RPP_DELINEATE_U(s, n, sep, m, _m) DETAIL_RPP_DELINEATE_I(RPP_OBSTRUCT(), RPP_INC(s), RPP_DEC(n), sep, m, _m)
#define DETAIL_RPP_DELINEATE_INDIRECT() DETAIL_RPP_DELINEATE_U
#define DETAIL_RPP_DELINEATE_I(_, s, n, sep, m, _m) \
        RPP_WHEN _(n) \
        ( \
            RPP_EXPR_S _(s)(DETAIL_RPP_DELINEATE_INDIRECT _()(s, n, sep, m, _m) sep _()) \
        ) \
        RPP_EXPR_S _(s)(_m _()(s, m, s, n)) 


#endif