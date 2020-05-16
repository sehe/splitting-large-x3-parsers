#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

DEFINE_PARSER(set_statement, "", "" > parameter_pack() > set_policy() > parameter_pack());

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(set_statement_type, iterator_type, context_type);
}
