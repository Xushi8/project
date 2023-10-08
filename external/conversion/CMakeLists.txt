add_library(conversion STATIC "")

file(GLOB sources CONFIGURE_DEPENDS src/*.c src/*.cpp)
file(GLOB header CONFIGURE_DEPENDS include/*.h include/*.hpp)

target_sources(conversion
PRIVATE
    ${sources}
PUBLIC
    ${header}
)

target_include_directories(conversion PUBLIC ${CMAKE_CURRENT_LIST_DIR}/include)