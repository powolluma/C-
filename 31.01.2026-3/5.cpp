#include <iostream>
#include <stdio.h>      //Подключение библиотеки для работы с файлами
using namespace std;

int main() {
    //Работа с файлом - чтение
    FILE* f = fopen("text.txt", "r");
    //Условие: проверка на наличие файла
    if (f == NULL) {
        cout << "Файл не найден\n";
        return 0;
    }

    // Счётчик строк
    int lines = 0;   
    // Текущий символ
    char ch;         

    //Цикл: читаем файл до конца
    while ((ch = fgetc(f)) != EOF) {
        //Условие: если каждая строка начинается с новой строки
        if (ch == '\n') {
            //Увеличиваем счетчик
            lines++;
        }
    }
    //Закрываем файл
    fclose(f);      

    //Вывод результата
    cout << "Количество строк: " << lines << endl;
    return 0;
}
