add_library(big_int STATIC "")

file(GLOB sources CONFIGURE_DEPENDS src/*.c src/*.cpp)
file(GLOB header CONFIGURE_DEPENDS include/*.h include/*.hpp)

target_sources(big_int
PRIVATE
    ${sources}
PUBLIC
    ${header}
)

target_include_directories(big_int PUBLIC ${CMAKE_CURRENT_LIST_DIR}/include)
