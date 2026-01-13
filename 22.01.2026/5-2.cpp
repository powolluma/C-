#include <iostream>
using namespace std;

bool SimpleNumber(int a){           //Функция проверки на простое число: возвращает true или false
    for(int i = 2; i * i <= a; i++){
        if(a % i == 0){
            return false;           //Условие: если число делится на четные или нечетные, то false
        }
    }
    return true;                    //Иначе true
}

int main(){
    setlocale(LC_ALL, "ru");

    int a; //Переменная

    cout << "a: ";
    cin >> a;       //Ввод числа

    if(SimpleNumber(a)){        //Условие: если функция возвращает true, то число четное
        cout << "Simple";
    }
    else{                       //Иначе функция возвращает false, число нечетное
        cout << "Not Simple";
    }

    return 0;
}