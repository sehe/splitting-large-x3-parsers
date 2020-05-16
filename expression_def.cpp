#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

DEFINE_PARSER(expression       , "", literal() | identifier() | invocation());

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(expression_type, iterator_type, context_type);
}
