#include <iostream>
#include <iomanip>
#include <cmath>

double f(double x) {
    return std::log(x);
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
        std::cout << "Ошибка: для логарифма x нужно a > 0" << std::endl;
        return 1;
    }

    std::cout << "==================" << std::endl;
    std::cout << "   x   |  f(x)  " << std::endl;
    std::cout << "==================" << std::endl;

    std::cout << std::fixed << std::setprecision(4);

    int negcount = 0;

    for (double x = a; x <= b + 1e-9; x += h) {
        double y = f(x);

        std::cout << std::setw(7) << x << " | " << std::setw(7) << y;

        if (y < 0) {
            std::cout << "  <-- отрицательное";
            negcount++;
        }
        std::cout << std::endl;
    }

    std::cout << "==========================" << std::endl;
    std::cout << "Количество отрицательных значений: " << negcount << std::endl;
    return 0;
}