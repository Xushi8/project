add_library(hello STATIC "")

file(GLOB sources CONFIGURE_DEPENDS src/*.c src/*.cpp)
file(GLOB header CONFIGURE_DEPENDS include/*.h include/*.hpp)

target_sources(hello
PRIVATE
    ${sources}
PUBLIC
    ${header}
)

target_include_directories(hello PUBLIC 
${CMAKE_CURRENT_LIST_DIR}/include 
${PROJECT_SOURCE_DIR}/external/fmt/include
)
