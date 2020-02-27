cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

project(cpp
	LANGUAGES CXX
	VERSION 1.0.0
)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_compile_options(-Wall -Wextra -pedantic -pedantic-errors)

add_executable(compare ${CMAKE_CURRENT_SOURCE_DIR}/template_functions/01_compare.cpp)
add_executable(find ${CMAKE_CURRENT_SOURCE_DIR}/template_functions/02_find.cpp)
add_executable(print_array ${CMAKE_CURRENT_SOURCE_DIR}/template_functions/03_print_array.cpp)
add_executable(array_begin_end ${CMAKE_CURRENT_SOURCE_DIR}/template_functions/04_array_begin_end.cpp)
add_executable(array_length ${CMAKE_CURRENT_SOURCE_DIR}/template_functions/05_array_length.cpp)

add_executable(vector ${CMAKE_CURRENT_SOURCE_DIR}/stdlib/vector.cpp)

add_executable(exp_vector ${CMAKE_CURRENT_SOURCE_DIR}/experiments/vector.cpp)
