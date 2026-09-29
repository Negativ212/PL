#include <iostream>
#include <typeinfo>

int main() {
    bool x = true, y = false;

    auto a = x & y;
    std::cout << "type a: " << typeid(a).name() << std::endl;

    auto b = x && y;
    std::cout << "type b: " << typeid(b).name() << std::endl;

    std::cout << "a = " << a << ", b = " << b << std::endl;
    return 0;
}