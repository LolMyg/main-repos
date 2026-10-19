#include <iostream>
#include <random>

int fillAndSum(int arr[], int size, int min, int max, int& minVal, int& maxVal);

int main() {
    setlocale(LC_ALL, "ru");

    int const size = 5;
    int arr[size];
    int min, max, minVal = 0, maxVal = 0;

    std::cout << "Введите диапазон (min,max): ";
    std::cin >> min >> max;
    if (std::cin.fail()) { std::cout << "Ошибка ввода"; return 1; }
    if (min > max) { std::cout << "Минимум больше максимума"; return 1; }

    int sum = fillAndSum(arr, size, min, max, minVal, maxVal);
    std::cout << "\nСумма массива с минимальным " << minVal << " и максимальным " << maxVal << " равна " << sum;
}

int fillAndSum(int arr[], int size, int min, int max, int& minVal, int& maxVal) {
    if (size <= 0) { return 0; }
    int sum = 0;

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(min, max);
    for (int i = 0; i < size; i++) {
        arr[i] = dis(gen); //заполнение массива случайными значениями
    }

    std::cout << "Массив: ";
    for (int x = 0; x < size; x++) {
        std::cout << arr[x] << " "; //вывод массива
    }

    minVal = maxVal = arr[0];
    for (int j = 0; j < size; j++) {
        sum += arr[j]; //суммирование значений массива

        if (arr[j] < minVal) { minVal = arr[j]; }
        if (arr[j] > maxVal) { maxVal = arr[j]; }
    }

    return sum;
}