cmake_minimum_required(VERSION 3.1)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(test1 LANGUAGES C CXX VERSION 1.0.1)

include(${CMAKE_CURRENT_LIST_DIR}/cmake/options.cmake)
include(${CMAKE_CURRENT_LIST_DIR}/cmake/compiler_options.cmake)
include(${CMAKE_CURRENT_LIST_DIR}/cmake/compiler_definitions.cmake)
include(${CMAKE_CURRENT_LIST_DIR}/cmake/ccache.cmake)
include(${CMAKE_CURRENT_LIST_DIR}/cmake/print_info.cmake)

add_subdirectory(src)
add_subdirectory(external)
