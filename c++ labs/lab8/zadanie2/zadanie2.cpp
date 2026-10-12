#include <iostream>
#include <string>

int main()
{
    setlocale(LC_ALL, "ru");
    std::string word; //создание переменной строки
    std::cout << "Введите слово: ";
    std::getline(std::cin, word); //запись строки с клавиатуры

    for (int i = 0; i < word.size(); i++) { //просматриваем все символы строки
        if (std::isdigit(word[i])) { //проверяем является ли элемент числом
            word[i] = '#'; //заменяем
        }
    }
    std::cout << "число с заменеными числами: " << word;
}