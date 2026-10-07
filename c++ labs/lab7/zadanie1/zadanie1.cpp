#include <iostream>

int main() {
    setlocale(LC_ALL, "ru");

    const int ROWS = 4, COLS = 3;
    int matrix[ROWS][COLS], i, j;

    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            std::cout << "значение матрицы[" << i << "][" << j << "]: ";
            std::cin >> matrix[i][j]; //ввод матрицы с клавиатуры
            if (std::cin.fail()) {
                std::cout << "ошибка ввода";
                return 1;
            }
        }
    }

    int minVal = matrix[0][0], minCols = 0, minRows = 0;

    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            if (matrix[i][j] < minVal) { //поиск минимального значения матрицы
                minVal = matrix[i][j];
                minRows = i;
                minCols = j;
            }
        }
    }

    std::cout << "Минимальное значение в строке " << minRows << " и столбце " << minCols << " - " << minVal;
}