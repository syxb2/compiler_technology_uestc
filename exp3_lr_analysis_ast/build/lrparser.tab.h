/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_BUILD_LRPARSER_TAB_H_INCLUDED
# define YY_YY_BUILD_LRPARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "./src/lrparser.y"

    #include "ast.h"

#line 53 "./build/lrparser.tab.h"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    num_INT = 258,                 /* num_INT  */
    num_FLOAT = 259,               /* num_FLOAT  */
    Y_ID = 260,                    /* Y_ID  */
    Y_INT = 261,                   /* Y_INT  */
    Y_FLOAT = 262,                 /* Y_FLOAT  */
    Y_VOID = 263,                  /* Y_VOID  */
    Y_CONST = 264,                 /* Y_CONST  */
    Y_IF = 265,                    /* Y_IF  */
    Y_ELSE = 266,                  /* Y_ELSE  */
    Y_WHILE = 267,                 /* Y_WHILE  */
    Y_BREAK = 268,                 /* Y_BREAK  */
    Y_CONTINUE = 269,              /* Y_CONTINUE  */
    Y_RETURN = 270,                /* Y_RETURN  */
    Y_ADD = 271,                   /* Y_ADD  */
    Y_SUB = 272,                   /* Y_SUB  */
    Y_MUL = 273,                   /* Y_MUL  */
    Y_DIV = 274,                   /* Y_DIV  */
    Y_MODULO = 275,                /* Y_MODULO  */
    Y_LESS = 276,                  /* Y_LESS  */
    Y_LESSEQ = 277,                /* Y_LESSEQ  */
    Y_GREAT = 278,                 /* Y_GREAT  */
    Y_GREATEQ = 279,               /* Y_GREATEQ  */
    Y_NOTEQ = 280,                 /* Y_NOTEQ  */
    Y_EQ = 281,                    /* Y_EQ  */
    Y_NOT = 282,                   /* Y_NOT  */
    Y_AND = 283,                   /* Y_AND  */
    Y_OR = 284,                    /* Y_OR  */
    Y_ASSIGN = 285,                /* Y_ASSIGN  */
    Y_LPAR = 286,                  /* Y_LPAR  */
    Y_RPAR = 287,                  /* Y_RPAR  */
    Y_LBRACKET = 288,              /* Y_LBRACKET  */
    Y_RBRACKET = 289,              /* Y_RBRACKET  */
    Y_LSQUARE = 290,               /* Y_LSQUARE  */
    Y_RSQUARE = 291,               /* Y_RSQUARE  */
    Y_COMMA = 292,                 /* Y_COMMA  */
    Y_SEMICOLON = 293              /* Y_SEMICOLON  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 17 "./src/lrparser.y"

    int token;
    int iValue;
    float fValue;
    char* sValue;
    past pAst;

#line 116 "./build/lrparser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_BUILD_LRPARSER_TAB_H_INCLUDED  */
