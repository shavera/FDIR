add_executable(fdir_test_app)

target_sources(fdir_test_app
PRIVATE
    main.cpp
)

target_link_libraries(fdir_test_app fdir)

if(FDIR_COVERAGE)
    target_code_coverage(fdir_test_app AUTO EXCLUDE main.cpp)
endif()