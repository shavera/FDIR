
add_library(fdir)

target_sources(fdir
PRIVATE
    DummyLib.cpp
)

target_include_directories(fdir PUBLIC include)
set_target_properties(fdir PROPERTIES CXX_STANDARD 20)

add_subdirectory(tests)
