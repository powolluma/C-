#include <iostream>
#include <stdio.h>      //Подключение библиотеки для работы с файлами
using namespace std;

int main() {
    //Работа с файлом - чтение
    FILE* f = fopen("file.txt", "r");
    //Условие: проверка на наличие файла
    if (f == NULL) {
        cout << "Файл не найден\n";
        return 0;
    }
    
    //Переменная для символа
    char letter;
    cout << "Введите символ: ";
    cin >> letter;

    //Текущий и предыдущий символ
    char ch, prev = ' ';
    //Счетчик слов
    int count = 0;

    //Цикл: читаем файл до конца
    while ((ch = fgetc(f)) != EOF) {
        //Условие: если есть совпадение, то увеличиваем счетчик слов на 1
        if ((prev == ' ' || prev == '\n') && ch == letter) {
            count++;
        }
        prev = ch;
    }
    //Закрываем файл
    fclose(f);

    //Вывод результата
    cout << "Количество слов: " << count << endl;
    return 0;
}
