cmake_minimum_required(VERSION 3.1)

project(digit-parser)

add_executable(
    parser-test
    test/main.c
    src/parser.c
)

target_include_directories(
    parser-test
    PRIVATE
    inc/
)

target_link_libraries(
    parser-test
    m
)
