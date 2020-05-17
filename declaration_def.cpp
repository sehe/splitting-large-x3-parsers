#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

X3_DEFINE_AND_INSTANTIATE(declaration,
    function_definition() | structure_definition() | enumeration_definition() | namespace_extension() | let_statement()
)
