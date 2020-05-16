#pragma once

//#include "utilities.hpp"
#include <boost/spirit/home/x3.hpp>
namespace x3 = boost::spirit::x3;

namespace parser {
    using iterator_type = std::string::iterator;
    using context_type = x3::phrase_parse_context<x3::ascii::space_type>::type;
}
