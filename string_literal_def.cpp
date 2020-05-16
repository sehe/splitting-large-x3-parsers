#include "parser_declarations.hpp"
#include "parser_configuration.hpp"

DEFINE_PARSER(string_literal   , "", x3::lexeme[ '"' > *('\\' >> x3::char_ | ~x3::char_('"')) > '"']);

namespace parser {
    BOOST_SPIRIT_INSTANTIATE(string_literal_type, iterator_type, context_type);
}
