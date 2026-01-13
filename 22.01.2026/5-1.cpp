#include <iostream>
using namespace std;

int MaxNumber(int a, int b){
    return(a > b) ? a : b;       //Функция: возвращает максимальное число
}

int main(){
    setlocale(LC_ALL, "ru");

    int x;
    int y;  //Переменные

    cout << "x: ";
    cin >> x;       //Ввод первого числа

    cout << "y: ";
    cin >> y;       //Ввод второго числа

    cout << "Max = " << max(x,y);       //Вывод результата, используя функцию

    return 0;
}