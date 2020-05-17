#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

X3_DEFINE_AND_INSTANTIATE(control_statement,
    for_loop() | while_loop() | if_else_statement() | switch_statement()
)
