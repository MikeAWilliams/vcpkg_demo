// main.cpp
#include <sqlite3.h>
#include <stdio.h>
#include <iostream>
#include <optional>
#include <string>

int main()
{
    printf("%s\n", sqlite3_libversion());
    std::optional<std::string> hello {"hello "};
    std::optional<std::string> world;
    std::cout << hello.value() << world.or_else([](){ return std::optional<std::string>{"world"};}).value() << std::endl;
    return 0;
}