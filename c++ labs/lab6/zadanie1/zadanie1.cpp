#include <iostream>

int main()
{
    setlocale(LC_ALL,"ru");

    const int SIZE = 5;
    int massiv[SIZE], num=0;

    std::cout << "Введите " << SIZE << " значений массива" << "\n";
    
    for (int x = 0; x < SIZE; x++) {
        std::cout << "massiv[" << x << "] = ";
        std::cin >> massiv[x];
    }

    for (int i = 0; i < SIZE; i++) {
        if (massiv[i] % 2 == 0) {
            num += 1;
        }
    }
    std::cout << "Колличество четных: " << num;
}