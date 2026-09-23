#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int chislo;
	cout << "Введите число ";
	cin >> chislo;
	if (cin.fail()) {
		cout << "Неверное значение";
	}
	else if (chislo % 5 == 0) {
		cout << "Кратно 5";
	}
	else {
		cout << "Остаток от деления " << chislo % 5;
	}

}