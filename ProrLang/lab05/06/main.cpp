#include <iostream>
#include <cmath>

int main() {
    int n = 1024;
    double s = std::pow(2, n);
    std::cout << std::fixed << s << std::endl;
    return 0;
}