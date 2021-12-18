add_subdirectory(lib)

add_executable(rtiow main.cpp)
target_link_libraries(rtiow PRIVATE mathlib)
