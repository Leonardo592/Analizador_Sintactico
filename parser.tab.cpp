// A Bison parser, made by GNU Bison 3.8.2.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.





#include "parser.tab.hpp"


// Unqualified %code blocks.
#line 21 "parser.ypp"
    
    namespace yy
    {
        parser::symbol_type yylex(); 
    }

    extern yy::parser::symbol_type obtener_siguiente_token();

#line 55 "parser.tab.cpp"


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif


// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif



// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yy_stack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YY_USE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

namespace yy {
#line 128 "parser.tab.cpp"

  /// Build a parser object.
  parser::parser ()
#if YYDEBUG
    : yydebug_ (false),
      yycdebug_ (&std::cerr)
#else

#endif
  {}

  parser::~parser ()
  {}

  parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------.
  | symbol.  |
  `---------*/



  // by_state.
  parser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  parser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  parser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  parser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  parser::symbol_kind_type
  parser::by_state::kind () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return symbol_kind::S_YYEMPTY;
    else
      return YY_CAST (symbol_kind_type, yystos_[+state]);
  }

  parser::stack_symbol_type::stack_symbol_type ()
  {}

  parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_NUMERO: // NUMERO
      case symbol_kind::S_expresion: // expresion
        value.YY_MOVE_OR_COPY< double > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_ID: // ID
        value.YY_MOVE_OR_COPY< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  parser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s)
  {
    switch (that.kind ())
    {
      case symbol_kind::S_NUMERO: // NUMERO
      case symbol_kind::S_expresion: // expresion
        value.move< double > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_ID: // ID
        value.move< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.kind_ = symbol_kind::S_YYEMPTY;
  }

#if YY_CPLUSPLUS < 201103L
  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_NUMERO: // NUMERO
      case symbol_kind::S_expresion: // expresion
        value.copy< double > (that.value);
        break;

      case symbol_kind::S_ID: // ID
        value.copy< std::string > (that.value);
        break;

      default:
        break;
    }

    return *this;
  }

  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_NUMERO: // NUMERO
      case symbol_kind::S_expresion: // expresion
        value.move< double > (that.value);
        break;

      case symbol_kind::S_ID: // ID
        value.move< std::string > (that.value);
        break;

      default:
        break;
    }

    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  parser::yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YY_USE (yyoutput);
    if (yysym.empty ())
      yyo << "empty symbol";
    else
      {
        symbol_kind_type yykind = yysym.kind ();
        yyo << (yykind < YYNTOKENS ? "token" : "nterm")
            << ' ' << yysym.name () << " (";
        YY_USE (yykind);
        yyo << ')';
      }
  }
#endif

  void
  parser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  parser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  parser::yypop_ (int n) YY_NOEXCEPT
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  parser::debug_level_type
  parser::debug_level () const
  {
    return yydebug_;
  }

  void
  parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  parser::state_type
  parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - YYNTOKENS] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - YYNTOKENS];
  }

  bool
  parser::yy_pact_value_is_default_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  parser::yy_table_value_is_error_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yytable_ninf_;
  }

  int
  parser::operator() ()
  {
    return parse ();
  }

  int
  parser::parse ()
  {
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The return value of parse ().
    int yyresult;

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << int (yystack_[0].state) << '\n';
    YY_STACK_PRINT ();

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[+yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token\n";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            symbol_type yylookahead (yylex ());
            yyla.move (yylookahead);
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    if (yyla.kind () == symbol_kind::S_YYerror)
    {
      // The scanner already issued an error message, process directly
      // to error recovery.  But do not keep the error token as
      // lookahead, it is too special and may lead us to an endless
      // loop in error recovery. */
      yyla.kind_ = symbol_kind::S_YYUNDEF;
      goto yyerrlab1;
    }

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.kind ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.kind ())
      {
        goto yydefault;
      }

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", state_type (yyn), YY_MOVE (yyla));
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[+yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
      switch (yyr1_[yyn])
    {
      case symbol_kind::S_NUMERO: // NUMERO
      case symbol_kind::S_expresion: // expresion
        yylhs.value.emplace< double > ();
        break;

      case symbol_kind::S_ID: // ID
        yylhs.value.emplace< std::string > ();
        break;

      default:
        break;
    }



      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 12: // definicion_Var: TIPO ID FINAL_SENT
#line 57 "parser.ypp"
                                         { 
                            std::cout << "Todo correcto! " << "\n";
                        }
#line 556 "parser.tab.cpp"
    break;

  case 13: // inicializacion_Var: ID OPE_ASIGN expresion FINAL_SENT
#line 62 "parser.ypp"
                                                          { 
                            std::cout << "Todo correcto!\t" << yystack_[3].value.as < std::string > () << " = " << yystack_[1].value.as < double > () << "\n"; 
                        }
#line 564 "parser.tab.cpp"
    break;

  case 14: // defn_e_Iniclzn_Var: TIPO ID OPE_ASIGN expresion FINAL_SENT
#line 68 "parser.ypp"
                                                            { 
                            std::cout << "Todo correcto!\t" << yystack_[3].value.as < std::string > () << " = " << yystack_[1].value.as < double > () << "\n";
                        }
#line 572 "parser.tab.cpp"
    break;

  case 15: // expresion: NUMERO
#line 73 "parser.ypp"
                                                        { yylhs.value.as < double > () = yystack_[0].value.as < double > ();      }
#line 578 "parser.tab.cpp"
    break;

  case 16: // expresion: expresion SUM expresion
#line 74 "parser.ypp"
                                                        { yylhs.value.as < double > () = yystack_[2].value.as < double > () + yystack_[0].value.as < double > (); }
#line 584 "parser.tab.cpp"
    break;

  case 17: // expresion: expresion REST expresion
#line 75 "parser.ypp"
                                                        { yylhs.value.as < double > () = yystack_[2].value.as < double > () - yystack_[0].value.as < double > (); }
#line 590 "parser.tab.cpp"
    break;

  case 18: // expresion: expresion MULT expresion
#line 76 "parser.ypp"
                                                        { yylhs.value.as < double > () = yystack_[2].value.as < double > () * yystack_[0].value.as < double > (); }
#line 596 "parser.tab.cpp"
    break;

  case 19: // expresion: expresion DIV expresion
#line 77 "parser.ypp"
                                                        { yylhs.value.as < double > () = yystack_[2].value.as < double > () / yystack_[0].value.as < double > (); }
#line 602 "parser.tab.cpp"
    break;

  case 20: // expresion: REST expresion
#line 78 "parser.ypp"
                                                        { yylhs.value.as < double > () = - yystack_[0].value.as < double > ();    }
#line 608 "parser.tab.cpp"
    break;

  case 21: // expresion: POW_CMATH PAREN_IZQ expresion SEPARADOR expresion PAREN_DER
#line 79 "parser.ypp"
                                                                                   {
                                                          yylhs.value.as < double > () = pow (yystack_[3].value.as < double > (),yystack_[1].value.as < double > ());
                                                                        }
#line 616 "parser.tab.cpp"
    break;

  case 22: // expresion: SQRT_CMATH PAREN_IZQ expresion PAREN_DER
#line 82 "parser.ypp"
                                                                {
                                                          yylhs.value.as < double > () = sqrt (yystack_[1].value.as < double > ());
                                                                        }
#line 624 "parser.tab.cpp"
    break;

  case 23: // expresion: SIN_CMATH PAREN_IZQ expresion PAREN_DER
#line 85 "parser.ypp"
                                                               {
                                                          yylhs.value.as < double > () = sin (yystack_[1].value.as < double > ());
                                                                        }
#line 632 "parser.tab.cpp"
    break;

  case 24: // expresion: COS_CMATH PAREN_IZQ expresion PAREN_DER
#line 88 "parser.ypp"
                                                               {
                                                          yylhs.value.as < double > () = cos (yystack_[1].value.as < double > ());
                                                                        }
#line 640 "parser.tab.cpp"
    break;

  case 25: // expresion: LOG_CMATH PAREN_IZQ expresion PAREN_DER
#line 91 "parser.ypp"
                                                               {
                                                          yylhs.value.as < double > () = log (yystack_[1].value.as < double > ());
                                                                        }
#line 648 "parser.tab.cpp"
    break;

  case 26: // expresion: LOG10_CMATH PAREN_IZQ expresion PAREN_DER
#line 94 "parser.ypp"
                                                                 {
                                                          yylhs.value.as < double > () = log10 (yystack_[1].value.as < double > ());
                                                                        }
#line 656 "parser.tab.cpp"
    break;

  case 27: // expresion: LOG2_CMATH PAREN_IZQ expresion PAREN_DER
#line 97 "parser.ypp"
                                                                {
                                                          yylhs.value.as < double > () = log2 (yystack_[1].value.as < double > ());
                                                                        }
#line 664 "parser.tab.cpp"
    break;

  case 28: // expresion: PAREN_IZQ expresion PAREN_DER
#line 100 "parser.ypp"
                                                        { yylhs.value.as < double > () = yystack_[1].value.as < double > (); }
#line 670 "parser.tab.cpp"
    break;

  case 29: // ingr_Valor_Var: OBJ_CIN OPE_ENTRADA ID FINAL_SENT
#line 103 "parser.ypp"
                                                         { 
                            std::cout << "Todo correcto! " << "\n";
                        }
#line 678 "parser.tab.cpp"
    break;

  case 30: // impr_Valor_Var: OBJ_COUT OPE_SALIDA ID FINAL_SENT
#line 108 "parser.ypp"
                                                         { 
                            std::cout << "Todo correcto! " << "\n";
                        }
#line 686 "parser.tab.cpp"
    break;

  case 31: // fin_Programa: KEYWORD NUMERO FINAL_SENT
#line 113 "parser.ypp"
                                                 {
                            std::cout << "Todo correcto! " << "\n";
                        }
#line 694 "parser.tab.cpp"
    break;

  case 32: // function: TIPO ID PAREN_IZQ PAREN_DER LLAVE_IZQ
#line 118 "parser.ypp"
                                                              {std::cout << "Todo correcto! " << "\n";}
#line 700 "parser.tab.cpp"
    break;

  case 33: // llave_DER: LLAVE_DER
#line 121 "parser.ypp"
                                  {std::cout << "Todo correcto! " << "\n";}
#line 706 "parser.tab.cpp"
    break;


#line 710 "parser.tab.cpp"

            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        std::string msg = YY_("syntax error");
        error (YY_MOVE (msg));
      }


    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.kind () == symbol_kind::S_YYEOF)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    // Pop stack until we find a state that shifts the error token.
    for (;;)
      {
        yyn = yypact_[+yystack_[0].state];
        if (!yy_pact_value_is_default_ (yyn))
          {
            yyn += symbol_kind::S_YYerror;
            if (0 <= yyn && yyn <= yylast_
                && yycheck_[yyn] == symbol_kind::S_YYerror)
              {
                yyn = yytable_[yyn];
                if (0 < yyn)
                  break;
              }
          }

        // Pop the current state because it cannot handle the error token.
        if (yystack_.size () == 1)
          YYABORT;

        yy_destroy_ ("Error: popping", yystack_[0]);
        yypop_ ();
        YY_STACK_PRINT ();
      }
    {
      stack_symbol_type error_token;


      // Shift the error token.
      error_token.state = state_type (yyn);
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
    goto yynewstate;


  /*-------------------------------------.
  | yyacceptlab -- YYACCEPT comes here.  |
  `-------------------------------------*/
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;


  /*-----------------------------------.
  | yyabortlab -- YYABORT comes here.  |
  `-----------------------------------*/
  yyabortlab:
    yyresult = 1;
    goto yyreturn;


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    YY_STACK_PRINT ();
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  parser::error (const syntax_error& yyexc)
  {
    error (yyexc.what ());
  }

#if YYDEBUG || 0
  const char *
  parser::symbol_name (symbol_kind_type yysymbol)
  {
    return yytname_[yysymbol];
  }
#endif // #if YYDEBUG || 0









  const signed char parser::yypact_ninf_ = -25;

  const signed char parser::yytable_ninf_ = -3;

  const signed char
  parser::yypact_[] =
  {
      41,   -25,    53,   -25,     5,    12,     9,    19,     4,   -25,
     -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,    10,    -4,
      25,    37,    40,   -25,    10,    10,    26,    27,    34,    35,
      39,    50,    54,    51,    10,   -25,    24,   -25,    64,    68,
     -25,    66,    10,    10,    10,    10,    10,    10,    10,   -25,
      10,    10,    10,    10,    62,    55,   -25,   -25,   -25,   -10,
      74,    82,    90,    98,   106,   114,    -8,    -8,   -25,   -25,
     -25,   -25,    10,   -25,   -25,   -25,   -25,   -25,   -25,   122,
     -25
  };

  const signed char
  parser::yydefact_[] =
  {
       0,    11,     0,     1,     0,     0,     0,     0,     0,    33,
       4,     5,     6,     7,     8,     9,     3,    10,     0,     0,
       0,     0,     0,    15,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    12,     0,    31,     0,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,    13,
       0,     0,     0,     0,     0,     0,    30,    29,    28,     0,
       0,     0,     0,     0,     0,     0,    16,    17,    18,    19,
      14,    32,     0,    22,    23,    24,    25,    26,    27,     0,
      21
  };

  const signed char
  parser::yypgoto_[] =
  {
     -25,   -25,   -25,   -25,   -25,   -24,   -25,   -25,   -25,   -25,
     -25
  };

  const signed char
  parser::yydefgoto_[] =
  {
       0,     2,    10,    11,    12,    33,    13,    14,    15,    16,
      17
  };

  const signed char
  parser::yytable_[] =
  {
      40,    41,    34,    35,    50,    51,    52,    53,    52,    53,
      54,    18,    72,    20,    23,    19,    36,    22,    59,    60,
      61,    62,    63,    64,    65,    24,    66,    67,    68,    69,
      25,    21,    37,    26,    27,    28,    29,    30,    31,    32,
      38,    -2,     1,    39,    -2,    55,    42,    43,    79,    -2,
      -2,    -2,    -2,     3,    44,    45,     4,     0,    49,    46,
      -2,     5,     6,     7,     8,    50,    51,    52,    53,    70,
      47,    56,     9,    71,    48,    57,    50,    51,    52,    53,
      50,    51,    52,    53,     0,     0,     0,    58,    50,    51,
      52,    53,     0,     0,     0,    73,    50,    51,    52,    53,
       0,     0,     0,    74,    50,    51,    52,    53,     0,     0,
       0,    75,    50,    51,    52,    53,     0,     0,     0,    76,
      50,    51,    52,    53,     0,     0,     0,    77,    50,    51,
      52,    53,     0,     0,     0,    78,    50,    51,    52,    53,
       0,     0,     0,    80
  };

  const signed char
  parser::yycheck_[] =
  {
      24,    25,     6,     7,    14,    15,    16,    17,    16,    17,
      34,     6,    22,     4,     4,     3,    20,    13,    42,    43,
      44,    45,    46,    47,    48,    15,    50,    51,    52,    53,
      20,    12,     7,    23,    24,    25,    26,    27,    28,    29,
       3,     0,     1,     3,     3,    21,    20,    20,    72,     8,
       9,    10,    11,     0,    20,    20,     3,    -1,     7,    20,
      19,     8,     9,    10,    11,    14,    15,    16,    17,     7,
      20,     7,    19,    18,    20,     7,    14,    15,    16,    17,
      14,    15,    16,    17,    -1,    -1,    -1,    21,    14,    15,
      16,    17,    -1,    -1,    -1,    21,    14,    15,    16,    17,
      -1,    -1,    -1,    21,    14,    15,    16,    17,    -1,    -1,
      -1,    21,    14,    15,    16,    17,    -1,    -1,    -1,    21,
      14,    15,    16,    17,    -1,    -1,    -1,    21,    14,    15,
      16,    17,    -1,    -1,    -1,    21,    14,    15,    16,    17,
      -1,    -1,    -1,    21
  };

  const signed char
  parser::yystos_[] =
  {
       0,     1,    32,     0,     3,     8,     9,    10,    11,    19,
      33,    34,    35,    37,    38,    39,    40,    41,     6,     3,
       4,    12,    13,     4,    15,    20,    23,    24,    25,    26,
      27,    28,    29,    36,     6,     7,    20,     7,     3,     3,
      36,    36,    20,    20,    20,    20,    20,    20,    20,     7,
      14,    15,    16,    17,    36,    21,     7,     7,    21,    36,
      36,    36,    36,    36,    36,    36,    36,    36,    36,    36,
       7,    18,    22,    21,    21,    21,    21,    21,    21,    36,
      21
  };

  const signed char
  parser::yyr1_[] =
  {
       0,    31,    32,    32,    32,    32,    32,    32,    32,    32,
      32,    32,    33,    34,    35,    36,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    36,    36,    36,    36,    37,
      38,    39,    40,    41
  };

  const signed char
  parser::yyr2_[] =
  {
       0,     2,     0,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     3,     4,     5,     1,     3,     3,     3,     3,
       2,     6,     4,     4,     4,     4,     4,     4,     3,     4,
       4,     3,     5,     1
  };


#if YYDEBUG
  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a YYNTOKENS, nonterminals.
  const char*
  const parser::yytname_[] =
  {
  "\"end of file\"", "error", "\"invalid token\"", "ID", "NUMERO",
  "OPE_COMP", "OPE_ASIGN", "FINAL_SENT", "TIPO", "KEYWORD", "OBJ_COUT",
  "OBJ_CIN", "OPE_SALIDA", "OPE_ENTRADA", "SUM", "REST", "MULT", "DIV",
  "LLAVE_IZQ", "LLAVE_DER", "PAREN_IZQ", "PAREN_DER", "SEPARADOR",
  "POW_CMATH", "SQRT_CMATH", "SIN_CMATH", "COS_CMATH", "LOG_CMATH",
  "LOG10_CMATH", "LOG2_CMATH", "NEG", "$accept", "Programa",
  "definicion_Var", "inicializacion_Var", "defn_e_Iniclzn_Var",
  "expresion", "ingr_Valor_Var", "impr_Valor_Var", "fin_Programa",
  "function", "llave_DER", YY_NULLPTR
  };
#endif


#if YYDEBUG
  const signed char
  parser::yyrline_[] =
  {
       0,    45,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    57,    62,    68,    73,    74,    75,    76,    77,
      78,    79,    82,    85,    88,    91,    94,    97,   100,   103,
     108,   113,   118,   121
  };

  void
  parser::yy_stack_print_ () const
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << int (i->state);
    *yycdebug_ << '\n';
  }

  void
  parser::yy_reduce_print_ (int yyrule) const
  {
    int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG


} // yy
#line 1076 "parser.tab.cpp"

#line 123 "parser.ypp"

namespace yy
{
    void parser::error(const std::string& msg) 
    {
        std::cout<< "Error de Sintaxis!\n";
    }
}
