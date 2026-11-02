#include <iostream>
#include <windows.h> // Добавил для работы с кодировкой Windows
using namespace std;
int main() {
	// Сменил кодировку
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
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