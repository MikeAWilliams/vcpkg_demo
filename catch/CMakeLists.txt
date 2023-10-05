# CMakeLists.txt
cmake_minimum_required(VERSION 3.0)

project(test)

find_package(Catch2 3 REQUIRED)

add_executable(test test.cpp)

target_link_libraries(test PRIVATE Catch2::Catch2WithMain)
target_compile_features(test PUBLIC cxx_std_23)