#pragma once

#include "ast.hpp"
#include <boost/spirit/home/x3.hpp>
namespace x3 = boost::spirit::x3;

namespace parser {
    using string_literal_type         = x3::rule<class string_literal_tag,         ast::string_literal,         true>;
    using character_literal_type      = x3::rule<class character_literal_tag,      ast::character_literal,      true>;
    using identifier_type             = x3::rule<class identifier_tag,             ast::identifier,             true>;
    using literal_type                = x3::rule<class literal_tag,                ast::literal,                true>;
    using parameter_pack_type         = x3::rule<class parameter_pack_tag,         ast::parameter_pack,         true>;
    using invocation_type             = x3::rule<class invocation_tag,             ast::invocation,             true>;
    using expression_type             = x3::rule<class expression_tag,             ast::expression,             true>;
    using list_type                   = x3::rule<class list_tag,                   ast::list,                   true>;
    using dictionary_type             = x3::rule<class dictionary_tag,             ast::dictionary,             true>;
    using compound_statement_type     = x3::rule<class compound_statement_tag,     ast::compound_statement,     true>;
    using control_block_body_type     = x3::rule<class control_block_body_tag,     ast::control_block_body,     true>;
    using identifier_sequence_type    = x3::rule<class identifier_sequence_tag,    ast::identifier_sequence,    true>;
    using function_definition_type    = x3::rule<class function_definition_tag,    ast::function_definition,    true>;
    using structure_definition_type   = x3::rule<class structure_definition_tag,   ast::structure_definition,   true>;
    using enumeration_definition_type = x3::rule<class enumeration_definition_tag, ast::enumeration_definition, true>;
    using namespace_scope_type        = x3::rule<class namespace_scope_tag,        ast::namespace_scope,        true>;
    using namespace_extension_type    = x3::rule<class namespace_extension_tag,    ast::namespace_extension,    true>;
    using let_policy_type             = x3::rule<class let_policy_tag,             ast::let_policy,             true>;
    using let_statement_type          = x3::rule<class let_statement_tag,          ast::let_statement,          true>;
    using set_policy_type             = x3::rule<class set_policy_tag,             ast::set_policy,             true>;
    using set_statement_type          = x3::rule<class set_statement_tag,          ast::set_statement,          true>;
    using declaration_type            = x3::rule<class declaration_tag,            ast::declaration,            true>;
    using for_loop_type               = x3::rule<class for_loop_tag,               ast::for_loop,               true>;
    using while_loop_type             = x3::rule<class while_loop_tag,             ast::while_loop,             true>;
    using if_else_statement_type      = x3::rule<class if_else_statement_tag,      ast::if_else_statement,      true>;
    using switch_statement_type       = x3::rule<class switch_statement_tag,       ast::switch_statement,       true>;
    using control_statement_type      = x3::rule<class control_statement_tag,      ast::control_statement,      true>;
    using statement_terminator_type   = x3::rule<class statement_terminator_tag,   ast::statement_terminator,   true>;
    using statement_type              = x3::rule<class statement_tag,              ast::statement,              true>;

    BOOST_SPIRIT_DECLARE(string_literal_type)         parser::string_literal_type         string_literal();
    BOOST_SPIRIT_DECLARE(character_literal_type)      parser::character_literal_type      character_literal();
    BOOST_SPIRIT_DECLARE(identifier_type)             parser::identifier_type             identifier();
    BOOST_SPIRIT_DECLARE(literal_type)                parser::literal_type                literal();
    BOOST_SPIRIT_DECLARE(parameter_pack_type)         parser::parameter_pack_type         parameter_pack();
    BOOST_SPIRIT_DECLARE(invocation_type)             parser::invocation_type             invocation();
    BOOST_SPIRIT_DECLARE(expression_type)             parser::expression_type             expression();
    BOOST_SPIRIT_DECLARE(list_type)                   parser::list_type                   list();
    BOOST_SPIRIT_DECLARE(dictionary_type)             parser::dictionary_type             dictionary();
    BOOST_SPIRIT_DECLARE(compound_statement_type)     parser::compound_statement_type     compound_statement();
    BOOST_SPIRIT_DECLARE(control_block_body_type)     parser::control_block_body_type     control_block_body();
    BOOST_SPIRIT_DECLARE(identifier_sequence_type)    parser::identifier_sequence_type    identifier_sequence();
    BOOST_SPIRIT_DECLARE(function_definition_type)    parser::function_definition_type    function_definition();
    BOOST_SPIRIT_DECLARE(structure_definition_type)   parser::structure_definition_type   structure_definition();
    BOOST_SPIRIT_DECLARE(enumeration_definition_type) parser::enumeration_definition_type enumeration_definition();
    BOOST_SPIRIT_DECLARE(namespace_scope_type)        parser::namespace_scope_type        namespace_scope();
    BOOST_SPIRIT_DECLARE(namespace_extension_type)    parser::namespace_extension_type    namespace_extension();
    BOOST_SPIRIT_DECLARE(let_policy_type)             parser::let_policy_type             let_policy();
    BOOST_SPIRIT_DECLARE(let_statement_type)          parser::let_statement_type          let_statement();
    BOOST_SPIRIT_DECLARE(set_policy_type)             parser::set_policy_type             set_policy();
    BOOST_SPIRIT_DECLARE(set_statement_type)          parser::set_statement_type          set_statement();
    BOOST_SPIRIT_DECLARE(declaration_type)            parser::declaration_type            declaration();
    BOOST_SPIRIT_DECLARE(for_loop_type)               parser::for_loop_type               for_loop();
    BOOST_SPIRIT_DECLARE(while_loop_type)             parser::while_loop_type             while_loop();
    BOOST_SPIRIT_DECLARE(if_else_statement_type)      parser::if_else_statement_type      if_else_statement();
    BOOST_SPIRIT_DECLARE(switch_statement_type)       parser::switch_statement_type       switch_statement();
    BOOST_SPIRIT_DECLARE(control_statement_type)      parser::control_statement_type      control_statement();
    BOOST_SPIRIT_DECLARE(statement_terminator_type)   parser::statement_terminator_type   statement_terminator();
    BOOST_SPIRIT_DECLARE(statement_type)              parser::statement_type              statement();
} // namespace parser

parser::string_literal_type         string_literal();
parser::character_literal_type      character_literal();
parser::identifier_type             identifier();
parser::literal_type                literal();
parser::parameter_pack_type         parameter_pack();
parser::invocation_type             invocation();
parser::expression_type             expression();
parser::list_type                   list();
parser::dictionary_type             dictionary();
parser::compound_statement_type     compound_statement();
parser::control_block_body_type     control_block_body();
parser::identifier_sequence_type    identifier_sequence();
parser::function_definition_type    function_definition();
parser::structure_definition_type   structure_definition();
parser::enumeration_definition_type enumeration_definition();
parser::namespace_scope_type        namespace_scope();
parser::namespace_extension_type    namespace_extension();
parser::let_policy_type             let_policy();
parser::let_statement_type          let_statement();
parser::set_policy_type             set_policy();
parser::set_statement_type          set_statement();
parser::declaration_type            declaration();
parser::for_loop_type               for_loop();
parser::while_loop_type             while_loop();
parser::if_else_statement_type      if_else_statement();
parser::switch_statement_type       switch_statement();
parser::control_statement_type      control_statement();
parser::statement_terminator_type   statement_terminator();
parser::statement_type              statement();
