#include <iostream>
#include <vector>

int main() {
    int x = 1, y = 0;
    (++x) = y;
    std::cout << x << " " << y;
}