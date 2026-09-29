#include<iostream>
#include<bitset> //для перевода в двоичный вид

using namespace std;

int main() {

	setlocale(LC_ALL, "ru");

	int sistema, chislo;

	cout << "=КАЛЬКУЛЯТОР СИСТЕМ СЧИСЛЕНИЯ=" << endl;
	cout << "выберите систему счисления:" << endl;
	cout << "2.двоичная(2)" << endl;
	cout << "8.восьмиричная(8)" << endl;
	cout << "10.десятиричная(10)" << endl;
	cout << "16.шестнадцатиричная(16)" << endl;

	cin >> sistema;

	cout << "введите число от 0 до 255: " << endl;

	cin >> chislo;

	if (chislo < 0 || chislo>255) {
		cout << "число должно быть в диапазоне от 0 до 255";
		return 1;
	}

	switch (sistema) {

	case 16:
		cout << hex << chislo << endl;
		break;

	case 10:
		cout << dec << chislo << endl;
		break;

	case 8:
		cout << oct << chislo << endl;
		break;

	case 2:
		cout << bitset<8>(chislo) << endl;
		break;

	default:
		cout << "некорректный ввод";
	}
}
