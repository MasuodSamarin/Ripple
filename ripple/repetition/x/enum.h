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
# ifndef RIPPLE_PREPROCESSOR_REPETITION_X_ENUM_H
# define RIPPLE_PREPROCESSOR_REPETITION_X_ENUM_H
#
# include <ripple/config.h>
# include <ripple/punctuation/comma.h>
# include <ripple/recursion/expr.h>
# include <ripple/repetition/x/delineate.h>
#
# /* RPP_ENUM_X */
#
# if CONFIG_RIPPLE_STD
#    define RPP_ENUM_X(size, count, ...) RPP_ENUM_X_S(RPP_STATE(), size, count, __VA_ARGS__)
# else
#    define RPP_ENUM_X(size, count, macro, data) RPP_ENUM_X_S(RPP_STATE(), size, count, macro, data)
# endif
#
# define RPP_ENUM_X_ID() RPP_ENUM_X
#
# /* RPP_ENUM_X_S */
#
# if CONFIG_RIPPLE_STD
#    define RPP_ENUM_X_S(s, size, count, ...) RPP_DELINEATE_X_S(s, size, count, RPP_COMMA, __VA_ARGS__)
# else
#    define RPP_ENUM_X_S(s, size, count, macro, data) RPP_DELINEATE_X_S(s, size, count, RPP_COMMA, macro, data)
# endif
#
# define RPP_ENUM_X_S_ID() RPP_ENUM_X_S
#
# endif