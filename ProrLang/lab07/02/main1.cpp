#include <iostream>
#include <algorithm>

int main() {
    int x = 10, y = 3, z = 0;
    ++x, z += 2*x + 3*y, ++y;
    std::cout << x << " " << y;
    return 0;
}