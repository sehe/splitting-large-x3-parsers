//#define BOOST_SPIRIT_X3_DEBUG
#include <iostream>
#include <iomanip>
#include <fstream>
#include "parser_declarations.hpp"
#include "parser_configuration.hpp"
namespace x3 = boost::spirit::x3;

template <typename Rule>
void exercise(Rule const& rule, std::string const& str) {
    auto f = std::begin(str), l = std::end(str);
    try {
        std::cout << std::quoted(str) << " with rule " << std::quoted(rule.name) << " -> ";
        
        typename Rule::attribute_type attr;
        bool const ok = x3::phrase_parse(f, l, rule, x3::ascii::space, attr);
        std::cout << std::boolalpha << ok;

        if (f != l) {
            std::cout << " Remaining: " << std::quoted(std::string(f, l)) << "\n";
        } else {
            std::cout << std::endl;
        }
    } catch(x3::expectation_failure<std::string::const_iterator> const& ef) {
        std::cout << "Expected " << ef.which() << " at " <<
            std::quoted(std::string(ef.where(), l)) << '\n';
    } catch(std::exception const& e) {
        std::cout << e.what() << "\n";
    }
}

int main() {
    exercise(parser::string_literal(), R"("hello")");
    exercise(parser::identifier(), "identify_me");

    exercise(parser::literal(),                "");
    exercise(parser::parameter_pack(),         "");
    exercise(parser::invocation(),             "");
    exercise(parser::expression(),             "");
    exercise(parser::list(),                   "");
    exercise(parser::dictionary(),             "");

    exercise(parser::compound_statement(),     "");
    exercise(parser::control_block_body(),     "");
    exercise(parser::identifier_sequence(),    "");
    exercise(parser::function_definition(),    "");
    exercise(parser::structure_definition(),   "");
    exercise(parser::enumeration_definition(), "");
    exercise(parser::namespace_scope(),        "");
    exercise(parser::namespace_extension(),    "");
    exercise(parser::declaration(),            "");
    exercise(parser::for_loop(),               "");
    exercise(parser::while_loop(),             "");
    exercise(parser::if_else_statement(),      "");
    exercise(parser::switch_statement(),       "");
    exercise(parser::control_statement(),      "");
    exercise(parser::statement_terminator(),   "");
    exercise(parser::statement(),              "");
    {
        std::ifstream ifs("filename");
        exercise(parser::statement(), {std::istreambuf_iterator(ifs), {}});
    }
}
