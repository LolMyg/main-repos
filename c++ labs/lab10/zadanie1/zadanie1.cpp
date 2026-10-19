#include <iostream>

void makeAbsolute(int& value);

int main() {
    setlocale(LC_ALL, "ru");

    int chislo;
    std::cout << "Введите значение: ";
    std::cin >> chislo;
    if (std::cin.fail()) { std::cout << "Ошибка ввода"; return 1; }
    makeAbsolute(chislo);
    std::cout << "Абсолютное значение: " << chislo;
}

void makeAbsolute(int& value) { //присваивание абсолютного значения числу через ссылку
    if (value < 0) {
        value = -value;
    }
}