#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

DEFINE_PARSER(structure_definition, "", "" > identifier() > namespace_scope());

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(structure_definition_type, iterator_type, context_type);
}
