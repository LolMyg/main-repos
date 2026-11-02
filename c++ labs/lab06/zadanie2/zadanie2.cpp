#include <iostream>
#include <random>

int main()
{
    setlocale(LC_ALL, "ru");

    const int SIZE = 15;
    int massiv[SIZE], num=0;

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(-100,100); //рандом от -100 до 100

    for (int x = 0; x < SIZE; x++) {
        massiv[x] = dis(gen); //создание случайного массива
        std::cout << massiv[x] << "\n";
    }

    int a, b;
    std::cout << "Введите интервал от а до b: " << "\n";
    std::cin >> a;
    std::cin >> b;

    for (int i = 0; i < SIZE; i++) {
        if (massiv[i] >= a && massiv[i] <= b) { //проверкаа на вхождения элемента в интервал
            num += 1;
        }
    }
    std::cout << "Колличество элементов вхоядщих в интервал [" << a << ";" << b << "] - " << num;
}