#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

DEFINE_PARSER(switch_statement, "", "" > expression() > '{' > *("" > expression() > control_block_body()) > '}');

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(switch_statement_type, iterator_type, context_type);
}
