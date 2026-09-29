#include <iostream>

int main() {
    short a = -1, b = 1;
    unsigned short c = 1;

    std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;

    std::cout << "a * b = " << a * b << std::endl;   // -1
    std::cout << "a * c = " << a * c << std::endl;   // -1

    std::cout << "type of a*b: " << typeid(a * b).name() << std::endl;
    std::cout << "type of a*c: " << typeid(a * c).name() << std::endl;

    return 0;
}