#include <iostream>
#include <string>

int main()
{
    setlocale(LC_ALL, "ru");
    std::string word,reword; //создание двух переменных строк
    std::cout << "Введите слово: ";
    std::getline(std::cin, word); //запись строки с клавиатуры

    for (int i = word.size() - 1; i >= 0; i--) { //реверс начинаем с конца (длина строки -1)
        reword += word[i]; //реверс строки
    }
    std::cout << "Реверс строки: " << reword;
}