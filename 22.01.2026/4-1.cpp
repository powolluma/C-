#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "ru");

    int numbers[10];    //Одномерный массив

    cout << "10 number = ";
    for(int i = 1; i < 10; i++){    //Цикл: ввод 10 чисел, пока i < 10
        cin >> numbers[i];
    }

    int min = numbers[0];           //Переменная для минимума

    for(int i = 1; i < 10; i++){    //Цикл работает, пока i < 10
        if(numbers[i] < min){       //Условие: если перебираемое число < минимального числа, то оно становится минимальным числом
            min = numbers[i];
        }
    }

    cout << "Min = " << min;        //Вывод результата

    return 0;
}