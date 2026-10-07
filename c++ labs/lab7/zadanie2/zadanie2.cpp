#include <iostream>
#include <random>
#include <iomanip>

int main() {
    setlocale(LC_ALL, "ru");

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(10, 99);

    const int ROWS = 3, COLS = 6;
    int matrix[ROWS][COLS];

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            matrix[i][j] = dis(gen); //создание случайной матрицы
        }
    }

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            std::cout << std::setw(4) <<matrix[i][j]; //вывод матрицы
        }
        std::cout << "\n";
    }
    
    int chet = 0, nechet = 0;
    
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (matrix[i][j] % 2 == 0) { //проверка на четность
                chet += 1;
            }
            else {
                nechet += 1;
            }
        }
    }

    std::cout << "Количество четных: " << chet << ", нечетных: " << nechet;
}