add_library(graphics STATIC ray.h sphere.h sphere.cpp hittable_list.cpp hittable_list.h)
target_link_libraries(graphics PRIVATE math)
set_target_properties(graphics PROPERTIES LINKER_LANGUAGE CXX)