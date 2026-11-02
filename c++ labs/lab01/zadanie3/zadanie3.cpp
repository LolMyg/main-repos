#include <iostream> //подключение библиотеки iostrream, без которой невозможен ввод и вывод 
using namespace std; //позволяет использовать стандартные команды (такие как cout, cin, endl) напрямую
int main() { //Главная функция, с которой всегда начинается выполнение любой программы на C++
	double lenght; //Объявляет переменную с именем lenght для хранения длины
	double width; //Объявляет переменную с именем width для хранения ширины
	double height; //Объявляет переменную с именем height для хранения высоты
	cout << "enter length, width, height "; //Выводит на экран подсказку для ввода трех чисел
	if (!(cin >> lenght >> width >> height) || lenght <= 0 || width <= 0 || height <= 0) { //Если ввели буквы или число меньше либо равно нулю
		cout << "Error: Invalid input! All dimensions must be positive numbers." << endl;
		return 1; // Завершаем программу с кодом ошибки 1
	}
	cout << "volume of a parallelepiped "; //Выводит на экран текст
	cout << lenght * width * height << endl; //Перемножает длину, ширину и высоту, выводит объем и переносит строку
	cout << "surface area of a parallelepiped "; //Выводит на экран текст
	cout << lenght * width * 2 + lenght * height * 2 + width * height * 2; //Вычисляет общую площадь всех 6 граней и выводит результат
	return 0; //Завершает работу функции main и возвращает операционной системе код 0, сообщая об успешном выполнении программы
}