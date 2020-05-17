#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

X3_DEFINE_AND_INSTANTIATE(structure_definition,
    "" > identifier() > namespace_scope()
)
