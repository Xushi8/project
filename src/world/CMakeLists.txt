add_library(world STATIC "")

file(GLOB sources CONFIGURE_DEPENDS src/*.c src/*.cpp)
file(GLOB header CONFIGURE_DEPENDS include/*.h include/*.hpp)

target_sources(world
PRIVATE
    ${sources}
PUBLIC
    ${header}
)

target_include_directories(world PUBLIC ${CMAKE_CURRENT_LIST_DIR}/include)
