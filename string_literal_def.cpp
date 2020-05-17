#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

X3_DEFINE_AND_INSTANTIATE(string_literal,
    x3::lexeme['"' > *('\\' >> x3::char_ | ~x3::char_('"')) > '"']
)
