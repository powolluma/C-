#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "ru");

    int a; //Переменные
    int b;

    cout << "First number: ";
    cin >> a;                   //Ввод первого числа

    cout << "Second number: ";
    cin >> b;                   //Ввод второго числа

    cout << a << " + " << b << " = " << a+b;    //Вывод ответа, где сразу складываются числа
}