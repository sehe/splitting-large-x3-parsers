#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

X3_DEFINE_AND_INSTANTIATE(enumeration_definition,
    "" > identifier() > '{' > *(identifier() > ('=' > x3::int_)) > '}'
)
