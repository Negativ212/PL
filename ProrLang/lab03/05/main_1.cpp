#include <iostream>
#include <typeinfo>
#include <utility>

typedef std::pair<double, int> mypair;   // псевдоним типа

int main() {
    mypair x = {0.5, 2};

    // 1) auto Ч тип выводитс€ из инициализатора
    auto y = x;                          // y имеет тип mypair
    std::cout << "auto    -> " << typeid(y).name() << std::endl;

    // 2) typedef Ч используем псевдоним дл€ объ€влени€
    mypair z;                            // z имеет тип mypair
    std::cout << "typedef -> " << typeid(z).name() << std::endl;

    // 3) decltype Ч тип берЄтс€ из выражени€
    decltype(x) u;                       // u имеет тип mypair
    std::cout << "decltype-> " << typeid(u).name() << std::endl;

    // 4) static_cast Ч €вное преобразование
    std::cout << "static_cast -> "
              << static_cast<int>(x.first) << std::endl;  // 0.5 -> 0

    // 5) sizeof Ч размер объекта
    std::cout << "sizeof(x)  -> " << sizeof(x) << std::endl;  // 16

    return 0;
}