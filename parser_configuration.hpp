#pragma once

#include "utilities.hpp"


namespace parser {
    using iterator_type = std::string::iterator;
    using context_type = x3::phrase_parse_context<x3::ascii::space_type>::type;
}
