#include <iostream>

void bubblesort(int* arr, int size);

int main()
{
    setlocale(LC_ALL, "ru");

    int const size = 5;
    int arr[size];

    for (int i = 0; i < size; i++) {
        std::cout << "Значение массива arr[" << i << "]: ";
        std::cin >> arr[i];
        if (std::cin.fail()) { std::cout << "неверный ввод"; return 1; }
    }

    bubblesort(arr, size);

    std::cout << "-----------------------------\n";

    for (int j = 0; j < size; j++) {
        std::cout << arr[j] << "\n";
    }
}

void bubblesort(int* arr, int size) { //функция сортировки пузырьком
    if (arr == nullptr) { std::cout << "неверное значение"; return; }

    for (int x = 0; x < size-1; x++) {
        for (int y = 0; y < size - 1 - x; y++) {
            if ( *(arr + y) > *(arr + y + 1) ) {
                int temp = *(arr + y + 1);
                *(arr + y + 1) = *(arr + y);
                *(arr + y) = temp;
            }
        }
    }
}