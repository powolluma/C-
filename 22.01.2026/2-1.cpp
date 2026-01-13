#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "ru");

    int number; //Переменная
    
    cout << "Number: ";
    cin >> number;      //Ввод числа

    if(number % 2 == 0){
        cout << "Chet";     //Условие: если число делится на 2, то четное
    }
    else{
        cout << "NeChet";   //Иначе нечетное
    }


    return 0;
}