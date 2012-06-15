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

#ifndef RIPPLE_PREPROCESSOR_DETECTION_H
#define RIPPLE_PREPROCESSOR_DETECTION_H
#include <ripple/config.h>
#include <ripple/cat.h>


#define RPP_NARGS(...) \
         RPP_DETAIL_NARGS(__VA_ARGS__,RPP_DETAIL_RSEQ_N())
#define RPP_DETAIL_NARGS(...) \
         RPP_DETAIL_ARG_N(__VA_ARGS__)
#define RPP_DETAIL_ARG_N( \
          _1, _2, _3, _4, _5, _6, _7, _8, _9,_10, \
         _11,_12,_13,_14,_15,_16,_17,_18,_19,_20, \
         _21,_22,_23,_24,_25,_26,_27,_28,_29,_30, \
         _31,_32,_33,_34,_35,_36,_37,_38,_39,_40, \
         _41,_42,_43,_44,_45,_46,_47,_48,_49,_50, \
         _51,_52,_53,_54,_55,_56,_57,_58,_59,_60, \
         _61,_62,_63,N,...) N
#define RPP_DETAIL_RSEQ_N() \
         63,62,61,60,                   \
         59,58,57,56,55,54,53,52,51,50, \
         49,48,47,46,45,44,43,42,41,40, \
         39,38,37,36,35,34,33,32,31,30, \
         29,28,27,26,25,24,23,22,21,20, \
         19,18,17,16,15,14,13,12,11,10, \
         9,8,7,6,5,4,3,2,1,0

#define DETAIL_RPP_CHECK_N(x, n, ...) n
#define RPP_CHECK(...) DETAIL_RPP_CHECK_N(__VA_ARGS__, 0,)

#define RPP_PROBE(x) x, 1,

#define RPP_IS_1(...) RPP_CHECK(RPP_CAT_HEAD(DETAIL_RPP_IS_1_, __VA_ARGS__))
#define DETAIL_RPP_IS_1_1 RPP_PROBE(~)

#define DETAIL_RPP_EMPTY_PROBE_DETAIL_RPP_EMPTY_PROBE RPP_PROBE(~)
#define RPP_IS_EMPTY(x) RPP_CHECK(RPP_CAT(DETAIL_RPP_EMPTY_PROBE_, x  DETAIL_RPP_EMPTY_PROBE))

#define DETAIL_RPP_PAREN_PROBE(...) RPP_PROBE(~)
#define DETAIL_RPP_IS_PAREN_HEAD(x, ...) RPP_CHECK(DETAIL_RPP_PAREN_PROBE x)
#define RPP_IS_PAREN(...) DETAIL_RPP_IS_PAREN_HEAD(__VA_ARGS__,)


#endif