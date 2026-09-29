#include <iostream>

bool check(int x, int y, int z) {
    return (x == y) + (x == z) == true;
}

int main() {                                                   
    std::cout << "x=0, y=0, z=0 -> " << check(0, 0, 0) << "\n";
    std::cout << "x=0, y=0, z=1 -> " << check(0, 0, 1) << "\n";
    std::cout << "x=0, y=1, z=0 -> " << check(0, 1, 0) << "\n";
    std::cout << "x=0, y=1, z=1 -> " << check(0, 1, 1) << "\n"; 
    return 0;
}