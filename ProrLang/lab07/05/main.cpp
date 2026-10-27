#include <iostream>
#include <vector>

int main() {
    int a = 1, b = 2;

    a, b = b, a;

    std::cout << a << " " << b;
}