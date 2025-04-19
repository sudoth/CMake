add_library(B_lib SHARED lib.cpp)
target_include_directories(B_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
set_target_properties(B_lib PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)