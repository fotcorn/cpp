cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

project(cpp
	LANGUAGES CXX
	VERSION 1.0.0
)

add_executable(compare ${CMAKE_CURRENT_SOURCE_DIR}/src/01_compare.cpp)
add_executable(find ${CMAKE_CURRENT_SOURCE_DIR}/src/02_find.cpp)
add_executable(print_array ${CMAKE_CURRENT_SOURCE_DIR}/src/03_print_array.cpp)
add_executable(array_begin_end ${CMAKE_CURRENT_SOURCE_DIR}/src/04_array_begin_end.cpp)
