#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

DEFINE_PARSER(declaration, "", function_definition() | structure_definition() | enumeration_definition() | namespace_extension() | let_statement());

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(declaration_type, iterator_type, context_type);
}
