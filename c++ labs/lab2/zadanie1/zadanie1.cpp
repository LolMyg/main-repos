#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int kg;
	double rub, cena; //цена и итоговая стоимость вещественные числа, потому используем double
	cout << "Введите вес товара ";
	cin >> kg;
	cout << "Введите цену за килограмм ";
	cin >> rub;
	cena = kg * rub;
	cout << "Итоговая стоимость: ";
	cout << cena;
}