#include <iostream>
#include <random>


//прототипы функций
void fillRandom(int arr[], int size, int min, int max);
void printArray(const int arr[], int size);
void bubbleSort(int arr[], int size);
int binarySearch(const int arr[], int size, int target);

int main()
{
    setlocale(LC_ALL, "ru");

    int const size = 5;
    int arr[size], min, max, target;

    std::cout << "Введите минимальное и максимальное значения массива: ";
    std::cin >> min >> max;
    if (std::cin.fail()) { std::cout << "Ошибка ввода"; return 1; }
    if (min > max) { std::cout << "Ошибка: минимум больше максимума"; return 1; }

    fillRandom(arr, size, min, max);

    std::cout << "Массив: ";
    printArray(arr, size);

    bubbleSort(arr, size);
    std::cout << "\nСортированный массив: ";
    printArray(arr, size);

    std::cout << "\nвведите искомое значение: ";
    std::cin >> target;
    if (std::cin.fail()) { std::cout << "Ошибка ввода"; return 1; }

    if (binarySearch(arr, size, target) == -1) {
        std::cout << "Элемент не найден";
    }
    else {
        std::cout << "Индекс искомого значения: " << binarySearch(arr, size, target);
    }
}

void fillRandom(int arr[], int size, int min, int max) { //заполнение массива случайными значениями
    if (size <= 0) return;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(min, max);
    for (int i = 0; i < size; i++) {
        arr[i] = dis(gen);
    }
}

void printArray(const int arr[], int size) { //вывод массива
    if (size <= 0) return;
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
}

void bubbleSort(int arr[], int size) { //сортировка пузырьком
    if (size <= 0) return;
    for (int i = 0; i < size-1; i++) {
        for (int j = 0; j < size-1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int binarySearch(const int arr[], int size, int target) { //бинарный поиск
    if (size <= 0) return -1;
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] < target) {
            left = mid + 1;
        }
        if (arr[mid] > target) {
            right = mid - 1;
        }
    }
    return -1;
}