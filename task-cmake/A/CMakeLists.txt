add_custom_command(
    OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/index.h
    COMMAND python3 ${CMAKE_CURRENT_SOURCE_DIR}/preparing.py
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

add_custom_target(generate_index ALL DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/index.h)