#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

DEFINE_PARSER(list             , "", '[' > *expression() > ']');

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(list_type, iterator_type, context_type);
}
