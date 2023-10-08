# message( STATUS "------------------ General configuration for ${PROJECT_NAME} ${VERSION} -----------------")
# message( STATUS )
# message( STATUS "CMake Version =         ${CMAKE_VERSION}")
# message( STATUS "CMake Generator =       ${CMAKE_GENERATOR}")
# message( STATUS "Compiler =              ${CMAKE_CXX_COMPILER_ID}")
# message( STATUS "Compiler Version =      ${CMAKE_CXX_COMPILER_VERSION}")
# message( STATUS "Build type =            ${CMAKE_BUILD_TYPE}")
# message( STATUS "CMake C Standard =      ${CMAKE_C_STANDARD}")
# message( STATUS "CMake C++ Standard =    ${CMAKE_CXX_STANDARD}")
# message( STATUS "CMAKE_INSTALL_PREFIX =  ${CMAKE_INSTALL_PREFIX}" )
# message( STATUS "CMAKE_DISABLE_PRECOMPILE_HEADERS = ${CMAKE_DISABLE_PRECOMPILE_HEADERS}" )
# message( STATUS "C++ flags (General) =   ${CMAKE_CXX_FLAGS}")
# message( STATUS "C++ flags (Release) =   ${CMAKE_CXX_FLAGS_RELEASE}")
# message( STATUS "C++ flags (RelWithDebInfo) = ${CMAKE_CXX_FLAGS_RELWITHDEBINFO}")
# message( STATUS "C++ flags (Debug) =     ${CMAKE_CXX_FLAGS_DEBUG}")
# message( STATUS "CMAKE_EXE_LINKER_FLAGS = ${CMAKE_EXE_LINKER_FLAGS}")
# message( STATUS "COMPILE_DEFINITIONS (global) =  ${DirCompileDefs}" )
# message( STATUS "COMPILE_OPTIONS (global) =  ${DirCompileOptions}" )


message(STATUS)
message(STATUS "Cmake version: ${CMAKE_VERSION}")
message(STATUS "Cmake minimum required version: ${CMAKE_MINIMUM_REQUIRED_VERSION}")


message(STATUS)
message(STATUS "Project version: ${${PROJECT_NAME}_VERSION}")


message(STATUS)
message(STATUS "C compiler flags: ${CMAKE_C_FLAGS}")
message(STATUS "C++ compiler flags: ${CMAKE_CXX_FLAGS}")

message(STATUS)
message(STATUS "C flags, Debug configuration: ${CMAKE_C_FLAGS_DEBUG}")
message(STATUS "C flags, Release configuration: ${CMAKE_C_FLAGS_RELEASE}")
message(STATUS "C flags, Release configuration with Debug info: ${CMAKE_C_FLAGS_RELWITHDEBINFO}")
message(STATUS "C flags, minimal Release configuration: ${CMAKE_C_FLAGS_MINSIZEREL}")
message(STATUS "C++ flags, Debug configuration: ${CMAKE_CXX_FLAGS_DEBUG}")
message(STATUS "C++ flags, Release configuration: ${CMAKE_CXX_FLAGS_RELEASE}")
message(STATUS "C++ flags, Release configuration with Debug info: ${CMAKE_CXX_FLAGS_RELWITHDEBINFO}")
message(STATUS "C++ flags, minimal Release configuration: ${CMAKE_CXX_FLAGS_MINSIZEREL}")
