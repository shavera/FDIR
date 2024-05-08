# CXX 20 standard needs CMake 3.12
# FetchContent requires CMake 3.14 (for MakeAvailable)
cmake_minimum_required(VERSION 3.12)
project(FDIR)

### Project Options and Flags
option(FDIR_BUILD_TESTS "Build unit tests for FDIR library" ON)
if(FDIR_BUILD_TESTS)
    enable_testing()
endif()

### Dependencies
include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG v1.14.0
)

### Set up project
add_subdirectory(fdir)
add_subdirectory(test_app)


