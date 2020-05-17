#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

X3_DEFINE_AND_INSTANTIATE(statement_terminator,
    x3::string("") | x3::string("") | x3::string("")
)
