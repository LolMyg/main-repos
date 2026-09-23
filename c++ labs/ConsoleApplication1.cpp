#include <iostream>
#include <windows.h> // Добавил для работы с кодировкой Windows
using namespace std;
int main() {
	// Настраиваем консоль на работу с UTF-8 (ввод и вывод)
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	setlocale(LC_ALL, "ru");
	string color;
	cout << "Какой горит цвет? ";
	cin >> color;
	if (color == "green" || color == "зеленый") {
		cout << "идите";
	}
	else if (color == "yellow" || color == "желтый") {
		cout << "ждите";
	}
	else if (color == "red" || color == "красный") {
		cout << "стойте";
	}
	else {
		cout << "некоректный ввод";
	}
}