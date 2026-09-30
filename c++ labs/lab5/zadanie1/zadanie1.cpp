#include <iostream>
#include <iomanip>
#include <cmath>

double f(double x) {
    return std::sqrt(x);
}

int main() {
    setlocale(LC_ALL, "ru");

    double a, b, h;

    std::cout << "Введите начало интервала a: ";
    std::cin >> a;

    std::cout << "Введите конец интервала b: ";
    std::cin >> b;

    std::cout << "Введите шаг h: ";
    std::cin >> h;

    if (a > b || h <= 0) {
        std::cout << "Ошибка: a должно быть <= b, h > 0" << std::endl;
        return 1;
    }

    if (a <= 0) {
        std::cout << "Ошибка: для корня x нужно a >= 0" << std::endl;
        return 1;
    }

    std::cout << "==================" << std::endl;
    std::cout << "   x   |  f(x)  " << std::endl;
    std::cout << "==================" << std::endl;

    for (double x = a; x <= b + 1e-9; x += h) {
        double y = f(x);

        std::cout << std::fixed << std::setprecision(4);
        std::cout << std::setw(7) << x << " | " << std::setw(7) << y << std::endl;
    }

    return 0;
}