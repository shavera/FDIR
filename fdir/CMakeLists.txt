
add_library(fdir)

target_sources(fdir
PRIVATE
    DummyLib.cpp
)

target_include_directories(fdir PUBLIC include)
set_target_properties(fdir PROPERTIES CXX_STANDARD 20)

if (FDIR_BUILD_TESTS)
    add_subdirectory(tests)
    if(FDIR_COVERAGE)
        target_link_libraries(fdir PRIVATE gcov)
        target_compile_options(fdir PRIVATE -fprofile-instr-generate -fcoverage-mapping)
    endif()
endif ()
