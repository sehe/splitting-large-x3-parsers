#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

X3_DEFINE_AND_INSTANTIATE(for_loop,
    "" > identifier() > "" > expression() > control_block_body()
)
