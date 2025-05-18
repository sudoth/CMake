add_library(B SHARED lib.cpp)
target_include_directories(B PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
set_target_properties(B PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)