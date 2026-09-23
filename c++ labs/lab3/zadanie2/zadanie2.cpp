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
	else if (chislo == 0) {
		cout << "Ноль";
	}
	else if (chislo > 0) {
		if (chislo % 2 == 0) {
			cout << "Положительное четное";
		}
		else {
			cout << "Положиетльное нечетное";
		}
	}
	else if (chislo < 0) {
		if (chislo % 2 == 0) {
			cout << "Орицательное четное";
		}
		else {
			cout << "Отрицатльное нечетное";
		}
	}
}