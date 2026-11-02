#include <iostream>

void makeAbsolute(int* ptr);

int main()
{
    setlocale(LC_ALL, "ru");

    int chislo;
    std::cout << "Введите число: ";
    std::cin >> chislo;
    if (std::cin.fail()) { std::cout << "неверный ввод"; return 1; }

    makeAbsolute(&chislo);

    std::cout << "Абсолютное значение: " << chislo;
}

void makeAbsolute(int* ptr) { //функция выдающая абсолютное значение числа
    if (ptr == nullptr) { std::cout << "неверное значение"; return; }

    if (*ptr < 0) {
        *ptr = -*ptr;
    }
}