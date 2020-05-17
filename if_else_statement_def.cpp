#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

X3_DEFINE_AND_INSTANTIATE(if_else_statement,
    "" > expression() > control_block_body() > ("" > control_block_body())
)
