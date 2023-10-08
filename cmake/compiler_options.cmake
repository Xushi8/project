if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU" OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    set(CMAKE_C_FLAGS_RELEASE "-O2 -DNDBUG")
    set(CMAKE_CXX_FLAGS_RELEASE "-O2 -DNDBUG")
    
    add_compile_options(-march=native)
    
    add_compile_options(-Wall)
    add_compile_options(-Wextra)
    add_compile_options(-pedantic)
    add_compile_options(-Wshadow)
    add_compile_options(-Wconversion)
    add_compile_options(-Wcast-qual)                # Cast for removing type qualifiers
    add_compile_options(-Wfloat-equal)              # Floating values used in equality comparisons
    add_compile_options(-Wredundant-decls)          # if anything is declared more than once in the same scope
    add_compile_options(-Wundef)
    
    add_compile_options(-fopenmp)
    add_compile_options(-ffast-math)
    
    add_compile_options(-fdiagnostics-color=always)
    
    # add_compile_options(-fopt-info)
    
    
    add_compile_options(-save-temps=obj)
    add_compile_options(-fverbose-asm) # 汇编保留源码
    add_compile_options(-masm=intel) # intel汇编

endif()
