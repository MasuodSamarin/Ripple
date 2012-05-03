# /* ********************************************************************
#  *                                                                    *
#  *    (C) Copyright Paul Mensonides, Paul Fultz II 2003-2012.         *
#  *                                                                    *
#  *    Distributed under the Boost Software License, Version 1.0.      *
#  *    (See accompanying file LICENSE).                                *
#  *                                                                    *
#  *    See http://github.com/pfultz2/Ripple for most recent version.   *
#  *                                                                    *
#  ******************************************************************** */
#
# ifndef RIPPLE_PREPROCESSOR_RECURSION_HIGHER_ORDER_H
# define RIPPLE_PREPROCESSOR_RECURSION_HIGHER_ORDER_H
#
# include <ripple/config.h>
# include <ripple/detection/is_nullary.h>
# include <ripple/recursion/auto_rec.h>
#
# /* RPP_HIGHER_ORDER */
#
# if CONFIG_RIPPLE_STD
#    define RPP_HIGHER_ORDER(e) DETAIL_RPP_HIGHER_ORDER_ ## e
#    define RPP_HIGHER_ORDER_ID() RPP_HIGHER_ORDER
# endif
#
# if CONFIG_RIPPLE_STD
#    define DETAIL_RPP_HIGHER_ORDER_ RPP_AUTO_REC(DETAIL_RPP_HIGHER_ORDER_P, 8)
#    define DETAIL_RPP_HIGHER_ORDER_P(e) RPP_IS_NULLARY(DETAIL_RPP_HIGHER_ORDER_ ## e(, ()))
#    define DETAIL_RPP_HIGHER_ORDER_1(p, ...) p ## __VA_ARGS__
#    define DETAIL_RPP_HIGHER_ORDER_2(p, ...) p ## __VA_ARGS__
#    define DETAIL_RPP_HIGHER_ORDER_3(p, ...) p ## __VA_ARGS__
#    define DETAIL_RPP_HIGHER_ORDER_4(p, ...) p ## __VA_ARGS__
#    define DETAIL_RPP_HIGHER_ORDER_5(p, ...) p ## __VA_ARGS__
#    define DETAIL_RPP_HIGHER_ORDER_6(p, ...) p ## __VA_ARGS__
#    define DETAIL_RPP_HIGHER_ORDER_7(p, ...) p ## __VA_ARGS__
#    define DETAIL_RPP_HIGHER_ORDER_8(p, ...) p ## __VA_ARGS__
# endif
#
# endif