#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	char bukva;
	cout << "введите оценку ";
	cin >> bukva;
	switch (bukva) {
	case 'F':
		cout << "провал";
		break;
	case 'D':
		cout << "неудовлетворительно";
		break;
	case 'C':
		cout << "удовлетворительно";
		break;
	case 'B':
		cout << "хорошо";
		break;
	case 'A':
		cout << "отлично";
		break;
	default:
		cout << "неверный ввод";
		break;
	}

}
