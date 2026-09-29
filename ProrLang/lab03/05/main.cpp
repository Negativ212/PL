#include <iostream>

int main() {
    std::pair<double, int> x;

    std::cout << "sizeof(double) = " << sizeof(double) << std::endl; // 8
    std::cout << "sizeof(int)    = " << sizeof(int)    << std::endl; // 4
    std::cout << "sizeof(pair)   = " << sizeof(x)       << std::endl; // 16

    return 0;
}