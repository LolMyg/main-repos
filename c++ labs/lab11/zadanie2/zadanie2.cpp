#include <iostream>

void fillArray(int* arr, int size, int value);

int main()
{
    setlocale(LC_ALL, "ru");
    int const size = 5;
    int arr[size];
    int znach;
    std::cout << "Введите значение массива: ";
    std::cin >> znach;
    if (std::cin.fail()) { std::cout << "неверный ввод"; return 1; }
    fillArray(arr, size, znach);

    std::cout << "-----------------------------\n";

    for (int j = 0; j < size; j++) {
        std::cout << arr[j] << "\n";
    }
}

void fillArray(int* arr, int size, int value) { //заполнение массива значением
    if (arr == nullptr) { std::cout << "неверное значение"; return; }

    for (int i = 0; i < size; i++) {
        arr[i] = value;
    }
}