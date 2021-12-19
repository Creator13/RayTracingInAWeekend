add_subdirectory(lib)

add_executable(rtiow main.cpp lib/rtiow.h)
target_include_directories(rtiow PRIVATE lib)
target_link_libraries(rtiow PRIVATE graphics)
target_link_libraries(rtiow PRIVATE math)
