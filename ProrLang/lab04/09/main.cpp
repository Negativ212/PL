#include <iostream>

int main() {
    int x;
    std::cin >> x;

    int y = ~x + 1;   // -x = ~x + 1 в дополнительном коде ~ это побитовое нет, или инверсия.

    std::cout << y << std::endl;
    return 0;
}