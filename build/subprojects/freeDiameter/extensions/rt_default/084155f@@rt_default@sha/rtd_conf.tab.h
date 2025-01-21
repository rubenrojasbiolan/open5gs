/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_RTD_CONF_SUBPROJECTS_FREEDIAMETER_EXTENSIONS_RT_DEFAULT_084155F_RT_DEFAULT_SHA_RTD_CONF_TAB_H_INCLUDED
# define YY_RTD_CONF_SUBPROJECTS_FREEDIAMETER_EXTENSIONS_RT_DEFAULT_084155F_RT_DEFAULT_SHA_RTD_CONF_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int rtd_confdebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    LEX_ERROR = 258,
    QSTRING = 259,
    BQSTRING = 260,
    INTEGER = 261,
    OH = 262,
    OR = 263,
    DH = 264,
    DR = 265,
    UN = 266,
    SI = 267,
    REALM = 268
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 114 "../subprojects/freeDiameter/extensions/rt_default/rtd_conf.y"

	int		 integer;	/* Store integer values */
	char 		*string;	/* The string is allocated by strdup in lex.*/
	struct {
		char * str;
		int regex;
	}		 tstring;	/* typed string */
	struct {
		char * str;
		int    regex;
		enum rtd_crit_type type;
	}		 criteria;
	struct {
		char * str;
		int    regex;
		enum rtd_targ_type type;
	}		 target;

#line 90 "subprojects/freeDiameter/extensions/rt_default/084155f@@rt_default@sha/rtd_conf.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int rtd_confparse (char * conffile);

#endif /* !YY_RTD_CONF_SUBPROJECTS_FREEDIAMETER_EXTENSIONS_RT_DEFAULT_084155F_RT_DEFAULT_SHA_RTD_CONF_TAB_H_INCLUDED  */
