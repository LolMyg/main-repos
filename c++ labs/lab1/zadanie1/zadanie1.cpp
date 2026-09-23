#include <iostream> //подключение библиотеки iostrream, без которой невозможен ввод и вывод 
using namespace std; //позволяет использовать стандартные команды (такие как cout, cin, endl) напрямую
int main() { //Главная функция, с которой всегда начинается выполнение любой программы на C++
	double storona; //Объявляет переменную с именем storona
	cout << "Square perimeter calculator:" << endl; //Выводит на экран текст
	cout << "enter a number "; //Выводит на экран текст
	if (!(cin >> storona) || storona <= 0) { // Если cin >> storona вернул false (ввели буквы) ИЛИ число меньше либо равно нулю
		cout << "Error: Invalid input! Please enter a positive number." << endl;
		return 1; // Завершаем программу с кодом ошибки 1
	}
	cout << "perimeter of a square "; //Выводит на экран текст
	cout << storona * 4; //Берет значение из переменной storona, умножает его на 4  и выводит полученный результат
	return 0; //Завершает работу функции main и возвращает операционной системе код 0, сообщая об успешном выполнении программы
}