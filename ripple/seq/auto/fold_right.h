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
# ifndef RIPPLE_PREPROCESSOR_SEQ_AUTO_FOLD_RIGHT_H
# define RIPPLE_PREPROCESSOR_SEQ_AUTO_FOLD_RIGHT_H
#
# include <ripple/cat.h>
# include <ripple/config.h>
# include <ripple/recursion/expr.h>
# include <ripple/recursion/higher_order.h>
# include <ripple/seq/fold_right.h>
#
# /* RPP_SEQ_AUTO_FOLD_RIGHT */
#
# if CONFIG_RIPPLE_STD
#    define RPP_SEQ_AUTO_FOLD_RIGHT RPP_CAT(DETAIL_RPP_SEQ_AUTO_FOLD_RIGHT_, RPP_HIGHER_ORDER())
#    define RPP_SEQ_AUTO_FOLD_RIGHT_ID() RPP_SEQ_AUTO_FOLD_RIGHT
# endif
#
# if CONFIG_RIPPLE_STD
#    define DETAIL_RPP_SEQ_AUTO_FOLD_RIGHT_1(...) RPP_HIGHER_ORDER(1)(, RPP_EXPR(RPP_SEQ_FOLD_RIGHT(__VA_ARGS__)))
#    define DETAIL_RPP_SEQ_AUTO_FOLD_RIGHT_2(...) RPP_HIGHER_ORDER(2)(, RPP_EXPR(RPP_SEQ_FOLD_RIGHT(__VA_ARGS__)))
#    define DETAIL_RPP_SEQ_AUTO_FOLD_RIGHT_3(...) RPP_HIGHER_ORDER(3)(, RPP_EXPR(RPP_SEQ_FOLD_RIGHT(__VA_ARGS__)))
#    define DETAIL_RPP_SEQ_AUTO_FOLD_RIGHT_4(...) RPP_HIGHER_ORDER(4)(, RPP_EXPR(RPP_SEQ_FOLD_RIGHT(__VA_ARGS__)))
#    define DETAIL_RPP_SEQ_AUTO_FOLD_RIGHT_5(...) RPP_HIGHER_ORDER(5)(, RPP_EXPR(RPP_SEQ_FOLD_RIGHT(__VA_ARGS__)))
#    define DETAIL_RPP_SEQ_AUTO_FOLD_RIGHT_6(...) RPP_HIGHER_ORDER(6)(, RPP_EXPR(RPP_SEQ_FOLD_RIGHT(__VA_ARGS__)))
#    define DETAIL_RPP_SEQ_AUTO_FOLD_RIGHT_7(...) RPP_HIGHER_ORDER(7)(, RPP_EXPR(RPP_SEQ_FOLD_RIGHT(__VA_ARGS__)))
#    define DETAIL_RPP_SEQ_AUTO_FOLD_RIGHT_8(...) RPP_HIGHER_ORDER(8)(, RPP_EXPR(RPP_SEQ_FOLD_RIGHT(__VA_ARGS__)))
# endif
#
# endif