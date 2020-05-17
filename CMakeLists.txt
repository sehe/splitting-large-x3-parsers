# vim: se fdm=marker
cmake_minimum_required(VERSION 3.5)
set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)

SET(BOOST_DIR /home/sehe/custom/boost_1_72_0)
INCLUDE_DIRECTORIES(SYSTEM ${BOOST_DIR})
LINK_DIRECTORIES("${BOOST_DIR}/stage/lib")

#set(CMAKE_BUILD_WITH_INSTALL_RPATH TRUE)
set(CMAKE_INSTALL_RPATH "${BOOST_DIR}/stage/lib")
set(CMAKE_BUILD_WITH_INSTALL_RPATH TRUE)
set(CMAKE_INSTALL_RPATH_USE_LINK_PATH TRUE)
set(CMAKE_SKIP_RPATH FALSE)

#SET(CMAKE_C_COMPILER gcc-10)
#SET(CMAKE_CXX_COMPILER g++-10) # // clang++-3.8 clang++-5.0 g++-5 iwyu
SET(CMAKE_CXX_COMPILER clang++-9) # // clang++-3.8 clang++-5.0 g++-5 iwyu
#set(CMAKE_CXX_CLANG_TIDY clang-tidy-9 -checks=-*,readability-*)
SET(CMAKE_EXE_LINKER_FLAGS "-Wl,--disable-new-dtags")

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic ") # -Wconversion
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++2a ") # -fcoroutines ")
#SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-unused-function -Wno-unused")
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O2 -pthread -march=native")
#SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-var-tracking-assignments")
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -flto")
#SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address,undefined")
#SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -ggdb -fno-omit-frame-pointer -O0 -pthread -march=x86-64")
#SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -ftemplate-depth=19000")

ADD_EXECUTABLE(test.exe test.cpp 
    string_literal_def.cpp
    character_literal_def.cpp
    compound_statement_def.cpp
    control_block_body_def.cpp
    control_statement_def.cpp
    declaration_def.cpp
    dictionary_def.cpp
    enumeration_definition_def.cpp
    for_loop_def.cpp
    function_definition_def.cpp
    identifier_def.cpp
    identifier_sequence_def.cpp
    if_else_statement_def.cpp
    invocation_def.cpp
    let_policy_def.cpp
    let_statement_def.cpp
    literal_def.cpp
    namespace_extension_def.cpp
    namespace_scope_def.cpp
    parameter_pack_def.cpp
    set_policy_def.cpp
    set_statement_def.cpp
    statement_def.cpp
    statement_terminator_def.cpp
    structure_definition_def.cpp
    switch_statement_def.cpp
    while_loop_def.cpp
    list_def.cpp
    expression_def.cpp
)
ADD_CUSTOM_COMMAND(OUTPUT .tidy-all
    COMMAND run-clang-tidy-9 -fix -header-filter='.*' -checks='*'
)
ADD_CUSTOM_TARGET(tidy-all DEPENDS .tidy-all)
ADD_CUSTOM_COMMAND(OUTPUT .stamp
    COMMAND run-clang-tidy-9 -fix -header-filter='.*' -checks='-*,readability-*'
)
ADD_CUSTOM_TARGET(tidy DEPENDS .stamp)
