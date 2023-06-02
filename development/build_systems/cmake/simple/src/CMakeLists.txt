add_library(dummy dummy.cpp)
target_include_directories(dummy PUBLIC .)

add_executable(dummy_runner dummy_runner.cpp)
target_link_libraries(dummy_runner dummy)
