/*	$Id: parser.y,v 1.3 1997/11/19 15:13:16 sandro Exp $	*/

/*
 * Copyright (c) 1997 Sandro Sigala <ssigala@globalnet.it>.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*
 * ISO C++ parser.
 *
 * Based on the ISO C++ draft standard of December '96.
 */

%{
#include <stdio.h>
#include "errors.h"
#include "token.h"

extern int line_num;

%}

%token IDENT ICON FCON CCON STRING
%token TYPEDEF_NAME NAMESPACE_NAME CLASS_NAME ENUM_NAME TEMPLATE_NAME

%token ELIPSIS COLONCOLON PLASN MIASN MUASN DIASN MOASN
%token ANASN ORASN SHL SHR EQ NE LE GE ANDAND OROR
%token INCOP DECOP FOLLOW

%token AUTO BOOL BREAK CASE CHAR CLASS CONST CONTINUE
%token DEFAULT DELETE DO DOUBLE ELSE ENUM EXTERN
%token FALSE FLOAT FOR GOTO IF INT LONG NAMESPACE NEW
%token PRIVATE PUBLIC REGISTER RETURN
%token SHORT SIGNED SIZEOF STATIC STRUCT SWITCH
%token TRUE TYPEDEF UNION UNSIGNED USING
%token VOID VOLATILE WHILE

%token ICON CCON FCON STRING
%token PLASN MIASN MUASN DIASN MOASN ANASN ERASN ORASN 
%token SHR SHL INCOP DECOP FOLLOW ANDAND OROR 
%token LE GE EQ NE SM LC RC CM COLON ASN LP RP LB RB DOT AND 
%token BANG NOT MINUS PLUS MUL DIV MOD LT GT ER OR QUEST IDENT 
%token BOOL NEW DELETE COLONCOLON USING NAMESPACE PDEFINE 
%token CLASS PRIVATE PUBLIC TRUE FALSE 

%start translation_unit

%%

/*----------------------------------------------------------------------
 * Context-dependent identifiers.
 *----------------------------------------------------------------------*/

typedef_name:
	/* identifier */
	TYPEDEF_NAME
	;

namespace_name:
	original_namespace_name
	| namespace_alias
	;

original_namespace_name:
	/* identifier */
	NAMESPACE_NAME
	;

namespace_alias:
	/* identifier */
	NAMESPACE_NAME
	;

class_name:
	/* identifier */
	CLASS_NAME
/*	| template_id*/
	;

enum_name:
	/* identifier */
	ENUM_NAME
	;

template_name:
	/* identifier */
	TEMPLATE_NAME
	;

/*----------------------------------------------------------------------
 * Lexical elements.
 *----------------------------------------------------------------------*/

identifier:
	IDENT
	;

literal:
	integer_literal
	| character_literal
	| floating_literal
	| string_literal
	| boolean_literal
	;

integer_literal:
	ICON
	;

character_literal:
	CCON
	;

floating_literal:
	FCON
	;

string_literal:
	STRING
	;

boolean_literal:
	TRUE
	| FALSE
	;

/*----------------------------------------------------------------------
 * Translation unit.
 *----------------------------------------------------------------------*/

translation_unit:
	/* epsilon */
	| declaration_seq
	;

/*----------------------------------------------------------------------
 * Expressions.
 *----------------------------------------------------------------------*/

primary_expression:
	literal
	| COLONCOLON identifier
	| LP expression RP
	| id_expression
	;

id_expression:
	unqualified_id
	;

unqualified_id:
	identifier
	| NOT class_name
	| template_id
	;

nested_name_specifier:
	class_or_namespace_name COLONCOLON nested_name_specifier
	| class_or_namespace_name COLONCOLON 
	;

class_or_namespace_name:
	class_name
	| namespace_name
	;

postfix_expression:
	primary_expression
	| postfix_expression LB expression RB
	| postfix_expression LP expression_list RP
	| postfix_expression LP RP
	| simple_type_specifier LP expression_list RP
	| simple_type_specifier LP RP
	| postfix_expression DOT pseudo_destructor_name
	| postfix_expression FOLLOW pseudo_destructor_name
	| postfix_expression INCOP
	| postfix_expression DECOP
	;

expression_list:
	expression_list CM assignment_expression 
	| assignment_expression
	;

pseudo_destructor_name:
	COLONCOLON nested_name_specifier type_name COLONCOLON NOT type_name
	| COLONCOLON type_name COLONCOLON NOT type_name
	| nested_name_specifier type_name COLONCOLON NOT type_name
	| type_name COLONCOLON NOT type_name
	| COLONCOLON nested_name_specifier NOT type_name
	| COLONCOLON NOT type_name
	| nested_name_specifier NOT type_name
	| NOT type_name
	;

unary_expression:
	postfix_expression
	| INCOP cast_expression
	| DECOP cast_expression
	| unary_operator cast_expression
	| SIZEOF unary_expression
	| SIZEOF LP type_id RP
	| new_expression
	| delete_expression
	;

unary_operator:
	MUL
	| QUEST
	| PLUS
	| MINUS
	| BANG
	| NOT
	;

new_expression:
	COLONCOLON NEW new_placement new_type_id new_initializer
	| NEW new_placement new_type_id new_initializer
	| COLONCOLON NEW new_type_id new_initializer
	| NEW new_type_id new_initializer
	| COLONCOLON NEW new_placement new_type_id 
	| NEW new_placement new_type_id 
	| COLONCOLON NEW new_type_id 
	| NEW new_type_id 
	| COLONCOLON NEW new_placement LP type_id RP new_initializer
	| NEW new_placement LP type_id RP new_initializer
	| COLONCOLON NEW LP type_id RP new_initializer
	| NEW LP type_id RP new_initializer
	| COLONCOLON NEW new_placement LP type_id RP
	| NEW new_placement LP type_id RP
	| COLONCOLON NEW LP type_id RP
	| NEW LP type_id RP
	;

new_placement:
	LP expression_list RP
	;

new_type_id:
	type_specifier_seq new_declarator
	| type_specifier_seq 
	;

new_declarator:
	ptr_operator new_declarator
	| ptr_operator
	| direct_new_declarator
	;

direct_new_declarator:
	LB expression RB
	| direct_new_declarator LB constant_expression RB
	;

new_initializer:
	LP expression_list RP
	| LP RP
	;

delete_expression:
	COLONCOLON DELETE cast_expression
	| DELETE cast_expression
	| COLONCOLON DELETE LB RB cast_expression
	| DELETE LB RB cast_expression
	;

cast_expression:
	unary_expression
	| LP type_id RP cast_expression
	;

pm_expression:
	cast_expression
	;

multiplicative_expression:
	pm_expression
	| multiplicative_expression MUL pm_expression
	| multiplicative_expression DIV pm_expression
	| multiplicative_expression MOD pm_expression
	;

additive_expression:
	multiplicative_expression
	| additive_expression PLUS multiplicative_expression
	| additive_expression MINUS multiplicative_expression
	;

shift_expression:
	additive_expression
	| shift_expression SHL additive_expression
	| shift_expression SHR additive_expression
	;

relational_expression:
	shift_expression
	| relational_expression LT shift_expression
	| relational_expression GT shift_expression
	| relational_expression LE shift_expression
	| relational_expression GE shift_expression
	;

equality_expression:
	relational_expression
	| equality_expression EQ relational_expression
	| equality_expression NE relational_expression
	;

and_expression:
	equality_expression
	| and_expression QUEST equality_expression
	;

exclusive_or_expression:
	and_expression
	| exclusive_or_expression ER and_expression
	;

inclusive_or_expression:
	exclusive_or_expression
	| inclusive_or_expression OR exclusive_or_expression
	;

logical_and_expression:
	inclusive_or_expression
	| logical_and_expression ANDAND inclusive_or_expression
	;

logical_or_expression:
	logical_and_expression
	| logical_or_expression OROR logical_and_expression
	;

conditional_expression:
	logical_or_expression
	| logical_or_expression QUEST expression COLON assignment_expression
	;

assignment_expression:
	conditional_expression
	| logical_or_expression assignment_operator assignment_expression
	;

assignment_operator:
	ASN
	| MUASN
	| DIASN
	| MOASN
	| PLASN
	| MIASN
	| ANASN
	| ORASN
	;

expression:
	assignment_expression
	| expression CM assignment_expression
	;

constant_expression:
	conditional_expression
	;

/*----------------------------------------------------------------------
 * Statements.
 *----------------------------------------------------------------------*/

statement:
	labeled_statement
	| expression_statement
	| compound_statement
	| selection_statement
	| iteration_statement
	| jump_statement
	| declaration_statement
	;

labeled_statement:
	identifier COLON statement
	| CASE constant_expression COLON statement
	| DEFAULT COLON statement
	;

expression_statement:
	expression SM
	| SM
	;

compound_statement:
	LC statement_seq RC
	LC RC
	;

statement_seq:
	statement
	| statement_seq statement
	;

selection_statement:
	IF LP condition RP statement
	| IF LP condition RP statement ELSE statement
	| SWITCH LP condition RP statement
	;

condition:
	expression
	| type_specifier_seq declarator ASN assignment_expression
	;

iteration_statement:
	WHILE LP condition RP statement
	| DO statement WHILE LP expression RP SM
	| FOR LP for_init_statement condition SM expression RP statement
	| FOR LP for_init_statement condition SM RP statement
	| FOR LP for_init_statement SM expression RP statement
	| FOR LP for_init_statement SM RP statement
	;

for_init_statement:
	expression_statement
	| simple_declaration
	;

jump_statement:
	BREAK SM
	| CONTINUE SM
	| RETURN expression SM
	| RETURN SM
	| GOTO identifier SM
	;

declaration_statement:
	block_declaration
	;

/*----------------------------------------------------------------------
 * Declarations.
 *----------------------------------------------------------------------*/

declaration_seq:
	declaration
	| declaration_seq declaration
	;

declaration:
	block_declaration
	| function_definition
	| linkage_specification
	| namespace_definition
	;

block_declaration:
	simple_declaration SM
	| namespace_alias_definition SM
	| using_declaration SM
	| using_directive SM
	;
/*
block_declaration:
	simple_declaration 
	| namespace_alias_definition
	| using_declaration
	| using_directive
	;
*/

simple_declaration:
	decl_specifier_seq init_declarator_list
	| init_declarator_list
	| decl_specifier_seq
	;
	
/*
simple_declaration:
	decl_specifier_seq init_declarator_list SM
	| init_declarator_list SM
	| decl_specifier_seq SM
	| SM
	;
*/
decl_specifier:
	storage_class_specifier
	| type_specifier
	| TYPEDEF
	;

decl_specifier_seq:
	decl_specifier_seq decl_specifier
	| decl_specifier
	;

storage_class_specifier:
	AUTO
	| REGISTER
	| STATIC
	| EXTERN
	;

type_specifier:
	simple_type_specifier
	| class_specifier
	| enum_specifier
	| elaborated_type_specifier
	| cv_qualifier
	;

simple_type_specifier:
	COLONCOLON nested_name_specifier type_name
	| COLONCOLON type_name
	| nested_name_specifier type_name
	| type_name
	| CHAR
	| BOOL
	| SHORT
	| INT
	| LONG
	| SIGNED
	| UNSIGNED
	| FLOAT
	| DOUBLE
	| VOID
	;

type_name:
	class_name
	| enum_name
	| typedef_name
	;

elaborated_type_specifier:
	class_key COLONCOLON nested_name_specifier identifier
	| class_key COLONCOLON identifier
	| class_key nested_name_specifier identifier
	| class_key identifier
	| ENUM COLONCOLON nested_name_specifier identifier
	| ENUM COLONCOLON identifier
	| ENUM nested_name_specifier identifier
	| ENUM identifier
	;

enum_specifier:
	ENUM identifier LC enumerator_list RC
	| ENUM LC enumerator_list RC
	| ENUM identifier LC RC
	| ENUM LC RC
	;

enumerator_list:
	enumerator_definition
	| enumerator_list CM enumerator_definition
	;

enumerator_definition:
	enumerator
	| enumerator ASN constant_expression
	;

enumerator:
	identifier
	;


namespace_name:
	original_namespace_name
	| namespace_alias
	;

original_namespace_name:
	identifier
	;

namespace_definition:
	named_namespace_definition
	| unnamed_namespace_definition
	;

named_namespace_definition:
	original_namespace_definition
	| extension_namespace_definition
	;

original_namespace_definition:
	NAMESPACE identifier LC namespace_body RC
	;

extension_namespace_definition:
	NAMESPACE original_namespace_name LC namespace_body RC
	;

unnamed_namespace_definition:
	NAMESPACE LC namespace_body RC
	;

namespace_body:
	/* epsilon */
	| declaration_seq
	;


namespace_alias:
	identifier
	;

namespace_alias_definition:
	NAMESPACE identifier ASN qualified_namespace_specifier
	;
	/*
namespace_alias_definition:
	NAMESPACE identifier ASN qualified_namespace_specifier SM
	;*/

qualified_namespace_specifier:
	COLONCOLON nested_name_specifier namespace_name
	| COLONCOLON namespace_name
	| nested_name_specifier namespace_name
	| namespace_name
	;

using_declaration:
	USING COLONCOLON unqualified_id
	;
	/*
using_declaration:
	USING COLONCOLON unqualified_id SM
	;*/

using_directive:
	USING NAMESPACE COLONCOLON nested_name_specifier namespace_name
	| USING NAMESPACE COLONCOLON namespace_name
	| USING NAMESPACE nested_name_specifier namespace_name
	| USING NAMESPACE namespace_name
	;
	/*
using_directive:
	USING NAMESPACE COLONCOLON nested_name_specifier namespace_name SM
	| USING NAMESPACE COLONCOLON namespace_name SM
	| USING NAMESPACE nested_name_specifier namespace_name SM
	| USING NAMESPACE namespace_name SM
	;*/

linkage_specification:
	EXTERN string_literal LC declaration_seq RC
	| EXTERN string_literal LC RC
	| EXTERN string_literal declaration
	;

/*----------------------------------------------------------------------
 * Declarators.
 *----------------------------------------------------------------------*/

init_declarator_list:
	init_declarator
	| init_declarator_list CM init_declarator
	;

init_declarator:
	declarator initializer
	| declarator
	;

declarator:
	direct_declarator
	| ptr_operator declarator
	;

direct_declarator:
	declarator_id
	| direct_declarator LB constant_expression RB
	| direct_declarator LB RB
	| LP declarator RP
	;

ptr_operator:
	MUL cv_qualifier_seq
	| MUL
	| QUEST
	| COLONCOLON nested_name_specifier MUL cv_qualifier_seq
	| nested_name_specifier MUL cv_qualifier_seq
	| COLONCOLON nested_name_specifier MUL	
	| nested_name_specifier MUL	
	;

cv_qualifier_seq:
	cv_qualifier cv_qualifier_seq
	| cv_qualifier
	;

cv_qualifier:
	CONST
	| VOLATILE
	;

declarator_id:
	COLONCOLON id_expression
	| id_expression
	| COLONCOLON nested_name_specifier type_name
	| COLONCOLON type_name
	| nested_name_specifier type_name
	| type_name
	;

type_id:
	type_specifier_seq abstract_declarator
	| type_specifier_seq 
	;

type_specifier_seq:
	type_specifier type_specifier_seq
	| type_specifier
	;

abstract_declarator:
	ptr_operator abstract_declarator
	| ptr_operator
	| direct_abstract_declarator
	;

direct_abstract_declarator:
	direct_abstract_declarator LB constant_expression RB
	| direct_abstract_declarator LB RB
	| LB constant_expression RB
	| LB RB
	| LP abstract_declarator RP
	;

parameter_declaration_clause:
	/* epsilon */
	| parameter_declaration_list ELIPSIS
	| parameter_declaration_list
	| parameter_declaration_list CM ELIPSIS
	;

parameter_declaration_list:
	parameter_declaration
	| parameter_declaration_list CM parameter_declaration
	;

parameter_declaration:
	decl_specifier_seq declarator
	| decl_specifier_seq declarator ASN assignment_expression
	| decl_specifier_seq abstract_declarator
	| decl_specifier_seq 
	| decl_specifier_seq abstract_declarator ASN assignment_expression
	| decl_specifier_seq ASN assignment_expression
	;

function_definition:
	decl_specifier_seq declarator ctor_initializer function_body
	| declarator ctor_initializer function_body
	| decl_specifier_seq declarator function_body
	| declarator function_body
	;

function_body:
	compound_statement
	;

initializer:
	ASN initializer_clause
	| LP expression_list RP
	;

initializer_clause:
	assignment_expression
	| LC initializer_list CM RC
	| LC initializer_list RC
	| LC RC
	;

initializer_list:
	initializer_clause
	| initializer_list CM initializer_clause
	;

/*----------------------------------------------------------------------
 * Classes.
 *----------------------------------------------------------------------*/

class_specifier:
	class_head LC member_specification RC
	| class_head LC RC
	;

class_head:
	class_key identifier base_clause
	| class_key identifier
	| class_key base_clause
	| class_key nested_name_specifier identifier base_clause
	| class_key nested_name_specifier identifier
	| class_key
	;

class_key:
	CLASS
	| STRUCT
	| UNION
	;

member_specification:
	member_declaration member_specification
	| member_declaration
	| access_specifier COLON member_specification
	| access_specifier COLON
	;

member_declaration:
	decl_specifier_seq member_declarator_list SM
	| member_declarator_list SM
	| decl_specifier_seq SM
	| SM
	| function_definition SM
	| function_definition
	| using_declaration
	;

member_declarator_list:
	member_declarator
	| member_declarator_list CM member_declarator
	;

member_declarator:
	declarator pure_specifier
	| declarator constant_initializer
	| declarator
	| identifier COLON constant_expression
	| COLON constant_expression
	;

/*
 * This rule need a hack for working around the ``= 0'' pure specifier.
 * 0 is returned as an ``ICON'' by the lexical analyzer but in this
 * context is different.
 */
pure_specifier:
	ASN '0'
	;

constant_initializer:
	ASN constant_expression
	;

/*----------------------------------------------------------------------
 * Derived classes.
 *----------------------------------------------------------------------*/

base_clause:
	COLON base_specifier_list
	;

base_specifier_list:
	base_specifier
	| base_specifier_list CM base_specifier
	;

base_specifier:
	COLONCOLON nested_name_specifier class_name
	| COLONCOLON class_name
	| nested_name_specifier class_name
	| class_name
	;

access_specifier:
	PRIVATE
	| PUBLIC
	;

/*----------------------------------------------------------------------
 * Special member functions.
 *----------------------------------------------------------------------*/
conversion_type_id:
	type_specifier_seq conversion_declarator
	| type_specifier_seq
	;

conversion_declarator:
	ptr_operator conversion_declarator
	| ptr_operator
	;

ctor_initializer:
	COLON mem_initializer_list
	;

mem_initializer_list:
	mem_initializer
	| mem_initializer CM mem_initializer_list
	;

mem_initializer:
	mem_initializer_id LP expression_list RP
	| mem_initializer_id LP RP
	;

mem_initializer_id:
	COLONCOLON nested_name_specifier class_name
	| COLONCOLON class_name
	| nested_name_specifier class_name
	| class_name
	| identifier
	;

/*----------------------------------------------------------------------
 * Overloading.
 *----------------------------------------------------------------------*/
operator:
	NEW
	| DELETE
	| NEW LB RB
	| DELETE LB RB
	| PLUS
	| '_'
	| MUL
	| DIV
	| MOD
	| ER
	| QUEST
	| OR
	| NOT
	| BANG
	| ASN
	| LT
	| GT
	| PLASN
	| MIASN
	| MUASN
	| DIASN
	| MOASN
	| ANASN
	| ORASN
	| SHL
	| SHR
	| EQ
	| NE
	| LE
	| GE
	| ANDAND
	| OROR
	| INCOP
	| DECOP
	| CM
	| FOLLOW
	| LP RP
	| LB RB
	;

/*----------------------------------------------------------------------
 * Templates.
 *----------------------------------------------------------------------*/
template_parameter_list:
	template_parameter
	| template_parameter_list CM template_parameter
	;

template_parameter:
	type_parameter
	| parameter_declaration
	;

type_parameter:
	CLASS identifier
	| CLASS identifier ASN type_id
	| CLASS ASN type_id
	| CLASS
	;

template_id:
	template_name LT template_argument_list GT
	;


template_name:
	identifier
	;

template_argument_list:
	template_argument
	| template_argument_list CM template_argument
	;

template_argument:
	assignment_expression
	| type_id
	| template_name
	;

/*----------------------------------------------------------------------
 * Exception handling.
 *----------------------------------------------------------------------*/
exception_declaration:
	type_specifier_seq declarator
	| type_specifier_seq abstract_declarator
	| type_specifier_seq
	| ELIPSIS
	;

type_id_list:
	type_id
	| type_id_list CM type_id
	;

%%
