#include <iostream>
#include <stdio.h>      //Подключение библиотеки для работы с файлами
using namespace std;

int main() {
    //Кол-во строк
    const int N = 3;    

    //Массив строк
    char arr[N][50] = {
        "Первая строка",
        "Вторая строка",
        "Третья строка"
    };

    //Работа с файлом - перезапись
    FILE* f = fopen("strings.txt", "w");
    //Условие: проверка наличия файла
    if (f == NULL) {
        cout << "Ошибка!\n";
        return 0;
    }

    //Цикл: запись строк в файл
    for (int i = 0; i < N; i++) {
        fprintf(f, "%s\n", arr[i]);
    }
    //Закрываем файл
    fclose(f);   
    //Сообщение об успешной операции
    cout << "Строки записаны\n";
    return 0;
}
