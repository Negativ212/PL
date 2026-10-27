#include <iostream>
#include <algorithm>

int main() {
    int x = 10, y = 3, z = 0;
    x = x + 1, z = z + 2*x + 3*y, y = y + 1;
    std::cout << x << " " << y;
    return 0;
}