#include <iostream>

int square(int x); //прототип функции

int main()
{
    setlocale(LC_ALL, "ru");
    
    int chislo;
    std::cout << "Введите число: ";
    std::cin >> chislo;
    if (std::cin.fail()) {
        std::cout << "Ошибка ввода";
        return 1;
    }
    std::cout << "Квадрат числа: " << square(chislo); //выозов функции
}

int square(int x) { //функция
    return x * x;
}