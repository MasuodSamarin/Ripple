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
# ifndef RIPPLE_PREPROCESSOR_CONTROL_AUTO_WHILE_H
# define RIPPLE_PREPROCESSOR_CONTROL_AUTO_WHILE_H
#
# include <ripple/cat.h>
# include <ripple/config.h>
# include <ripple/control/while.h>
# include <ripple/recursion/expr.h>
# include <ripple/recursion/higher_order.h>
#
# /* RPP_AUTO_WHILE */
#
# if CONFIG_RIPPLE_STD
#    define RPP_AUTO_WHILE RPP_CAT(DETAIL_RPP_AUTO_WHILE_, RPP_HIGHER_ORDER())
#    define RPP_AUTO_WHILE_ID() RPP_AUTO_WHILE
# endif
#
# if CONFIG_RIPPLE_STD
#    define DETAIL_RPP_AUTO_WHILE_1(...) RPP_HIGHER_ORDER(1)(, RPP_EXPR(RPP_WHILE(__VA_ARGS__)))
#    define DETAIL_RPP_AUTO_WHILE_2(...) RPP_HIGHER_ORDER(2)(, RPP_EXPR(RPP_WHILE(__VA_ARGS__)))
#    define DETAIL_RPP_AUTO_WHILE_3(...) RPP_HIGHER_ORDER(3)(, RPP_EXPR(RPP_WHILE(__VA_ARGS__)))
#    define DETAIL_RPP_AUTO_WHILE_4(...) RPP_HIGHER_ORDER(4)(, RPP_EXPR(RPP_WHILE(__VA_ARGS__)))
#    define DETAIL_RPP_AUTO_WHILE_5(...) RPP_HIGHER_ORDER(5)(, RPP_EXPR(RPP_WHILE(__VA_ARGS__)))
#    define DETAIL_RPP_AUTO_WHILE_6(...) RPP_HIGHER_ORDER(6)(, RPP_EXPR(RPP_WHILE(__VA_ARGS__)))
#    define DETAIL_RPP_AUTO_WHILE_7(...) RPP_HIGHER_ORDER(7)(, RPP_EXPR(RPP_WHILE(__VA_ARGS__)))
#    define DETAIL_RPP_AUTO_WHILE_8(...) RPP_HIGHER_ORDER(8)(, RPP_EXPR(RPP_WHILE(__VA_ARGS__)))
# endif
#
# endif