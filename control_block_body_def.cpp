#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

X3_DEFINE_AND_INSTANTIATE(control_block_body,
    (':' > statement()) | compound_statement()
)
