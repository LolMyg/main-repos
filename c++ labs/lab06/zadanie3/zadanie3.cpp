#include <iostream>
#include <random>

int main()
{
    setlocale(LC_ALL, "ru");

    const int SIZE = 16;
    int massiv[SIZE];

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 100);

    std::cout << "Исходный массив: " << "\n";

    for (int x = 0; x < SIZE-1; x++) {
        massiv[x] = dis(gen); //создание случайного массива
        std::cout << massiv[x] << ", ";
    }

    int pos, chislo;
    std::cout << "\nВведите индекс и число: ";
    std::cin >> pos;
    std::cin >> chislo;

    if (std::cin.fail()) {
        std::cout << "Неверное значение";
        return 1;
    }

    if (pos > SIZE-1 || pos < 0) {
        std::cout << "Выход за границы массива";
        return 1;
    }

    for (int i = SIZE-1; i > pos; i--) {
        massiv[i] = massiv[i - 1]; //сдвиг массива вправо
    }
    massiv[pos] = chislo; 
    std::cout << "Новый массив:" << "\n";

    for (int z = 0; z < SIZE; z++) {
        std::cout << massiv[z] << ", ";
    }
}