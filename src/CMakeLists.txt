add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(hello)
add_subdirectory(world)
add_subdirectory(big_int)

target_link_libraries(${PROJECT_NAME}
PRIVATE
    # sources
    hello
    world
    big_int

    # external
    fmt
)
