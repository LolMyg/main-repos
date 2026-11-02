#include <iostream>

int countEven(const int arr[], int size); //прототип функции

int main()
{
    setlocale(LC_ALL, "ru");

    int const size = 5;
    int arr[size];

    for (int i = 0; i < size; i++) { // перебор элементов массива и его последующее заполнение с клавиатуры
        std::cout << "arr[" << i << "]= ";
        std::cin >> arr[i];
        if (std::cin.fail()) {
            std::cout << "Ошибка ввода";
            return 1;
        }
    }

    std::cout << "Количество четных: " << countEven(arr, size);

}

int countEven(const int arr[], int size) { //функция
    if (size <= 0) return 0;
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) { //проверка на четность
            count += 1;
        }
    }
    return count;
}