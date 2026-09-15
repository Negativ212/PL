#include <vector>
#include <iostream>

int main() {
    std::vector<int> v(5);
    for (int i = 0; i < 5; i++)
        std::cout << v[i] << ' ';
    std::cout << std::endl;
    return 0;
}