#include <iostream>

void evaluatePoly(const int coeff[], int size, double x, double& polynomial, double& derivative); //функция поиска полинома и производной полинома в точке x

int main()
{
    setlocale(LC_ALL, "ru");

    int const size = 5;
    int coeff[size];
    double x, polynomial, derivative;

    for (int z = 0; z < size; z++) { //ввод коэффицентов
        std::cout << "Введи коэффиценты coeff[" << z << "]= ";
        std::cin >> coeff[z];
        if (std::cin.fail()) { std::cout << "Ошибка ввода"; return 1; }
    }

    std::cout << "Введите x: ";
    std::cin >> x;
    if (std::cin.fail()) { std::cout << "Ошибка ввода"; return 1; }

    evaluatePoly(coeff, size, x, polynomial, derivative);

    std::cout << "Полином: " << polynomial << " Полином производной: " << derivative;
}

void evaluatePoly(const int coeff[], int size, double x, double& polynomial, double& derivative) {
    
    polynomial = coeff[size - 1];
    for (int i = size - 2; i >= 0; i--) { //size-2, тк size-1 уже записан в полином
        polynomial = polynomial * x + coeff[i]; //поиск полинома по методу горнера a1 + x(a2 + x(a3 + x(...)))
    }

    int derivCoeff[4];
    for (int j = size - 2; j >= 0; j--) { //size-2 для смещение на 1 коэфиицент
        derivCoeff[j] = coeff[j + 1] * (j + 1); //создание массива производной
    }

    derivative = derivCoeff[size - 2]; //size-2, тк массив производной на 1 коэффицент меньше исходного
    for (int k = size - 3; k >= 0; k--) { //size-3, тк size-2 уже записан в производную
        derivative = derivative * x + derivCoeff[k]; //поиск полинома производной по горнеру
    }
}