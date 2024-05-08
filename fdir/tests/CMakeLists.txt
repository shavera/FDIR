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

include(GoogleTest)
gtest_discover_tests(fdir_test)
