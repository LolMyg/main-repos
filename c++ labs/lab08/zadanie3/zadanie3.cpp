#include <iostream>
#include <string>

int main()
{
    setlocale(LC_ALL, "ru");
    std::string word; //создание переменной строки
    std::cout << "Введите слово: ";
    std::getline(std::cin, word); //запись строки с клавиатуры
    int size = word.size(); //запись длины строки в int 

    if (word.empty()) { //проверка на пустую строку
        std::cout << "Ошибка: пустая строка";
        return 1;
    }

    std::cout << "Вывод вида буква: количество\n";

    for (int i = 0; i < size; i++) { //проходимся по всем символам строки
        int count = 0; //обнуление счетчика символов перед следущим проходом
        bool rule = true; //правило нужное для проверки уже повторявшихся символов

        for (int x = i - 1; x >= 0; x--) { //проверка встерчался ли символ раньше
            if (word[i] == word[x]) {
                rule = false;
                break;
            }
        }

        for (int j = 0; j < size; j++) { //второй раз проходимся по всем символам
            if ( (word[i] == word[j]) and rule) { //сравнение и проверка на повторение символов
                count += 1;
            }
        }

        if (rule) { //вывод при условии что символ встречается впервые
            std::cout << word[i] << ": " << count << "\n";
        }
    }
}