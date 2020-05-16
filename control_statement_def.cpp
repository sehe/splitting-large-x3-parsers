#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

DEFINE_PARSER(control_statement, "", for_loop() | while_loop() | if_else_statement() | switch_statement());

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(control_statement_type, iterator_type, context_type);
}
