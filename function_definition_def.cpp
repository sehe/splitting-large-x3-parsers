#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

DEFINE_PARSER(function_definition, "", x3::lit("") > '(' > identifier() > *identifier() > ')' > control_block_body());

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(function_definition_type, iterator_type, context_type);
}
