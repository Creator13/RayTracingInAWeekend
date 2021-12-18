add_library(mathlib vec3.h color.h)
target_include_directories(mathlib PUBLIC ${CMAKE_CURRENT_LIST_DIR})
set_target_properties(mathlib PROPERTIES LINKER_LANGUAGE CXX)