#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

DEFINE_PARSER(statement_terminator, "", x3::string("") | x3::string("") | x3::string(""));

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(statement_terminator_type, iterator_type, context_type);
}
