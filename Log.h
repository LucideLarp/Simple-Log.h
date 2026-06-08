#pragma once
#include <iostream>
#include <ostream>
#include <string>


inline std::string input;
auto Log(const auto& message) {
    std::cout << message << std::endl;
}

void Read() {
    std::getline(std::cin, input);
}
