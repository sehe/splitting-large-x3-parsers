#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

X3_DEFINE_AND_INSTANTIATE(set_statement,
    "" > parameter_pack() > set_policy() > parameter_pack()
)
