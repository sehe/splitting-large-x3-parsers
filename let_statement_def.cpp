#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

DEFINE_PARSER(let_statement, "", "" > identifier_sequence() > let_policy() > parameter_pack());

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(let_statement_type, iterator_type, context_type);
}
