#include <iostream>
#include <stdio.h>          //Подключение библиотеки для работы с файлами
using namespace std;

int main() {
    //Работа с файлом - чтение
    FILE* f = fopen("text.txt", "r");
    //Условие: проверка на наличие файла
    if (f == NULL) {
        cout << "Файл не найден\n";
        return 0;
    }

    // Счётчик символов
    int count = 0;   
    // Текущий символ
    char ch;         

    //Цикл: читаем файл до конца
    while ((ch = fgetc(f)) != EOF) {
        // Увеличиваем счётчик
        count++;     
    }
    //Закрываем файл
    fclose(f);
    //Вывод результата
    cout << "Количество символов: " << count << endl;
    return 0;
}
