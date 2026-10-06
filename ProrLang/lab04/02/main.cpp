#include <iostream>
using namespace std;

int main() {
    // Десятичные
    cout << 42 << endl;          // int
    cout << 42u << endl;         // unsigned int
    cout << 42l << endl;         // long
    cout << 42ul << endl;        // unsigned long
    cout << 42ll << endl;        // long long
    cout << 42ull << endl;       // unsigned long long

    // Восьмеричные (начинаются с 0)
    cout << 052 << endl;         // 42
    cout << 052u << endl;
    cout << 052ull << endl;

    // Шестнадцатеричные (0x)
    cout << 0x2A << endl;        // 42
    cout << 0x2Au << endl;
    cout << 0x2Aull << endl;
    cout << 0X2A << endl;

    // Двоичные (0b, C++14)
    cout << 0b101010 << endl;    // 42
    cout << 0b101010u << endl;
    cout << 0B1010 << endl;

    // Разделители разрядов (C++14)
    cout << 1'000'000 << endl;
    cout << 0xFF'FF'FF << endl;

    // Разный регистр суффиксов
    cout << 42U << endl;
    cout << 42L << endl;
    cout << 42UL << endl;
    cout << 42LU << endl;
    cout << 42LLU << endl;

    // Символьные литералы (тоже числа)
    cout << '#' << endl;   // 35
    cout << 'A' << endl;   // 65
}