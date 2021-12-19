add_subdirectory(math)
add_subdirectory(graphics)

target_include_directories(graphics PRIVATE ${CMAKE_CURRENT_LIST_DIR})
