add_executable(C main.cpp)
target_include_directories(C PRIVATE ${CMAKE_SOURCE_DIR}/A ${CMAKE_SOURCE_DIR}/B)
target_link_libraries(C PRIVATE B_lib)

find_package(GTest REQUIRED)
add_executable(CTest main_test.cpp tests.cpp)
target_include_directories(CTest PRIVATE ${CMAKE_SOURCE_DIR}/A ${CMAKE_SOURCE_DIR}/B)
target_link_libraries(CTest PRIVATE B_lib GTest::GTest GTest::Main)

set_target_properties(C CTest PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)