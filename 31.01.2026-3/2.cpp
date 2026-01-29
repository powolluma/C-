#include <iostream>
#include <stdio.h>      //Подключение библиотеки для работы с файлами
using namespace std;

int main() {
    //Работа с файлом - чтение
    FILE* f1 = fopen("input.txt", "r");
    //Работа с файлом - перезапись
    FILE* f2 = fopen("output.txt", "w");

    //Условие: проверка на наличие файлов
    if (f1 == NULL || f2 == NULL) {
        cout << "Ошибка!\n";
        return 0;
    }

    // Текущий символ
    char ch; 

    //Цикл: читает файл до конца по символам
    while ((ch = fgetc(f1)) != EOF) {
        //Условие: если символ 0, то заменяем на 1
        if (ch == '0') ch = '1';
        //Иначе заменяем символ 1 на 0
        else if (ch == '1') ch = '0';

        //Записываем символ
        fputc(ch, f2);
    }
    //Закрываем файлы
    fclose(f1); 
    fclose(f2); 

    //Сообщение об успешной операции
    cout << "Файл обработан\n";
    return 0;
}
