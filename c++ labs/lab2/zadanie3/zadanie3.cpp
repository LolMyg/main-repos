#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "ru");
    double a, b, c, d, e, x;
    cout << "Введите коэффициенты a, b, c, d, e: ";
    cin >> a >> b >> c >> d >> e;
    cout << "Введите значение x: ";
    cin >> x;
    // Схема Горнера:
    double y = ((((a * x + b) * x + c) * x + d) * x + e);
    cout << y;
}