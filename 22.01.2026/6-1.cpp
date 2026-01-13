#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "ru");

    int a = 10;
    int b = 20;         //Переменные

    cout << a << b << "\n";     //Вывод чисел до результата

    int *ptra = &a;             //Разыменование числа
    int *ptrb = &b;             //Разыменование числа

    int temp = *ptra;           //Третья переменная: берет значение первой переменной
    *ptra = *ptrb;              //Первая переменная = вторая переменная
    *ptrb = temp;               //Вторая переменная = третья переменная

    cout << a << b;             //Вывод результата

    return 0;
}