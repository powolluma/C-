#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "ru");

    int n; //Переменная
     
    cout << "n = ";
    cin >> n;       //Ввод числа

    for(int i = 1; i <= 10; i++){       //Цикл: вывод таблицы умножения, пока i<=10
        cout << n << " x " << i << " = " << n*i;
        cout << "\n\n";                 
    }

    return 0;
}