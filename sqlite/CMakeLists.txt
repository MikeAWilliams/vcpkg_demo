# CMakeLists.txt
cmake_minimum_required(VERSION 3.0)

project(test)

find_package(unofficial-sqlite3 CONFIG REQUIRED)

add_executable(main main.cpp)

target_link_libraries(main PRIVATE unofficial::sqlite3::sqlite3)
target_compile_features(main PUBLIC cxx_std_23)