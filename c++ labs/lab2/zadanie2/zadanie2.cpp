#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int chislo;
	cout << "Введите число ";
	cin >> chislo;
	double kvadrat = chislo * chislo;
	double kub = chislo * chislo * chislo;
	cout << "Квадрат числа: " << kvadrat << endl;
	cout << "Куб числа: " << kub;
}