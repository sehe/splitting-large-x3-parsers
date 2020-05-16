#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

namespace parser {
    static declaration_type declaration_ = "declaration";
    static auto declaration__def = function_definition() | structure_definition() | enumeration_definition() | namespace_extension() | let_statement();
    BOOST_SPIRIT_DEFINE(declaration_);
} // namespace parser

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(declaration_type, iterator_type, context_type);
    parser::declaration_type declaration() { return parser::declaration_; };
}
