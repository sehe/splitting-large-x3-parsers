#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

X3_DEFINE_AND_INSTANTIATE(function_definition,
    x3::lit("") > '(' > identifier() > *identifier() > ')' > control_block_body()
)
