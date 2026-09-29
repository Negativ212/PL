#include <iostream>
int main() {
    bool b = 1;     // OK: b = true
    int x = true;   // OK: x = 1
    std::cout << "b = " << b << ", x = " << x << std::endl;
    return 0;
}