cmake_minimum_required(VERSION 3.15 FATAL_ERROR)
project(my_antlr4_example)

set(CMAKE_CXX_STANDARD 17)

# Настройки рантайма ANTLR
set(ANTLR_BUILD_CPP_TESTS OFF CACHE BOOL "" FORCE)
set(ANTLR_BUILD_SHARED OFF CACHE BOOL "" FORCE)
set(ANTLR_BUILD_STATIC ON CACHE BOOL "" FORCE)

set(ANTLR_DIR ${CMAKE_SOURCE_DIR}/3rdparty/antlr4-4.13.2/runtime/Cpp)
add_subdirectory(${ANTLR_DIR})

set(ANTLR_INCLUDE ${ANTLR_DIR}/src)
set(ANTLR_LIB antlr4_static)

# Автоматически находим файлы парсера
file(GLOB PARSER_FILES "src/parser/*.cpp" "src/parser/*.h")

# ЖЕСТКО прописываем путь к main.cpp (без всяких масок поиска)
set(MY_GRAMMAR_EXAMPLE_FILES "src/my_grammar_example/main.cpp")

# Создаем цели
add_library(my_parser STATIC ${PARSER_FILES})
add_executable(my_grammar_example ${MY_GRAMMAR_EXAMPLE_FILES})

target_link_libraries(my_grammar_example my_parser ${ANTLR_LIB})

target_include_directories(my_parser PUBLIC ${ANTLR_INCLUDE} "src/parser")
target_include_directories(my_grammar_example PUBLIC "src/parser" ${ANTLR_INCLUDE})
target_compile_definitions(my_parser PUBLIC ANTLR4CPP_STATIC)
target_compile_definitions(my_grammar_example PUBLIC ANTLR4CPP_STATIC)