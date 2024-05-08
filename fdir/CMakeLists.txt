
add_library(fdir)

target_sources(fdir
PRIVATE
    DummyLib.cpp
)

target_include_directories(fdir PUBLIC include)
set_target_properties(fdir PROPERTIES CXX_STANDARD 20)

if (FDIR_BUILD_TESTS)
    if(FDIR_COVERAGE)
        include(code-coverage)
        target_code_coverage(fdir AUTO)
    endif()
    add_subdirectory(tests)
endif ()
