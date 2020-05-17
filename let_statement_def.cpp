#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

X3_DEFINE_AND_INSTANTIATE(let_statement,
    "" > identifier_sequence() > let_policy() > parameter_pack()
)
