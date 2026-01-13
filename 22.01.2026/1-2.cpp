#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "ru");

    int c;  //Переменная
    
    cout << "Temperature in C*: ";
    cin >> c;                       //Ввод температуры в С*

    int temp = c * 9 / 5 + 32;      //Переменная, в которой считается температура в F*

    cout << "Temperature in F* = " << temp; //Вывод результата

    return 0;
}