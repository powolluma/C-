#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "ru");

    int number; //Переменная

    cout << "Number: ";
    cin >> number;      //Ввод числа

    if(number % 4 == 0 && number % 100 != 0){
        cout << number << " visokosniy god";    //Условие: если число делится на 4 и при делении на 100 не равно 0, то високосный
    }
    else{
        cout << number << " ne visokosniy god"; //Иначе не високосный
    }

    return 0;
}