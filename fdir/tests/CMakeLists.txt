include(FetchContent)
FetchContent_MakeAvailable(googletest)

add_executable(fdir_test)

target_sources(fdir_test
PRIVATE
    DummyTest.cpp
)

target_link_libraries(fdir_test
PRIVATE
    fdir
    GTest::gtest_main
)

if(FDIR_COVERAGE)
    include(code-coverage)
    target_code_coverage(fdir_test AUTO)
endif()

include(GoogleTest)
gtest_discover_tests(fdir_test)
