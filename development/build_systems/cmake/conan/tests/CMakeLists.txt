option(ENABLE_TESTING OFF)
if(NOT ENABLE_TESTING)
    return()
endif()

enable_testing()

option(ENABLE_BENCHMARK OFF)
if(ENABLE_BENCHMARK)
    find_package(benchmark REQUIRED)

    add_executable(benchmark_example benchmark_example.cpp)
    target_link_libraries(benchmark_example benchmark::benchmark)
endif()

option(ENABLE_GTEST OFF)
if(ENABLE_GTEST)
    find_package(GTest REQUIRED)

    add_executable(gtest_example gtest_example.cpp)
    target_link_libraries(gtest_example GTest::gtest_main GTest::gtest dummy)
endif()
