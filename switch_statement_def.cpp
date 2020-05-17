#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

X3_DEFINE_AND_INSTANTIATE(switch_statement,
    "" > expression() > '{' > *("" > expression() > control_block_body()) > '}'
)
