#include "parser_declarations.hpp"
#include "parser_definitions.hpp"
#include "parser_configuration.hpp"

#define INSTANTIATE_PARSER(name) BOOST_SPIRIT_INSTANTIATE(name ## _type, iterator_type, context_type)

namespace parser {
    INSTANTIATE_PARSER(statement);
}
