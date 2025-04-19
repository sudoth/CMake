cmake_minimum_required(VERSION 3.10)
project(MyProject)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)

add_subdirectory(A)

add_subdirectory(B)

add_subdirectory(C)

add_dependencies(C_main generate_index)
add_dependencies(CTest generate_index)