#include <iostream>
#include <random>
#include <iomanip>

int main() {
    setlocale(LC_ALL, "ru");

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 100);

    const int ROWS = 4, COLS = 4;
    int matrix[ROWS][COLS];

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            matrix[i][j] = dis(gen); //создание случайной матрицы
        }
    }

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            std::cout << std::setw(4) << matrix[i][j]; //вывод исходной матрицы
        }
        std::cout << "\n";
    }

    int rotmatrix[ROWS][COLS];

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            rotmatrix[j][ROWS - 1 - i] = matrix[i][j]; //создание матрицы повернутой на 90 градусов
        }
    }

    std::cout << "-------------------\n";

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            std::cout << std::setw(4) << rotmatrix[i][j]; //вывод повернутой матрицы
        }
        std::cout << "\n";
    }
}