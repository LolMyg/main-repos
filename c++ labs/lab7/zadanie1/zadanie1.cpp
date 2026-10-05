#include <iostream>

int main()
{
    const int SIZE = 5;
    int massiv[SIZE] = { 1,2,3,4,5 };

    for (int i = 0; i < SIZE / 2; i++) {
        int temp = massiv[i];
        massiv[i] = massiv[SIZE - 1 - i];
        massiv[SIZE - 1 - i] = temp;
        std::cout << temp;
    }
    for (int x = 0;x < SIZE;x++) {
        //std::cout << massiv[x] << " ";
    }
}
