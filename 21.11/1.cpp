//Написать рекурсивную функцию нахождения степени числа
#include <iostream>
//#define Stepen(X, Y) (((X) * (X)) * Y - 1)
using namespace std;

int Stepen(int x, int y){
    if (y == 0){ 
        int result = 1;
        return result;
    }   
    else{
        int result = x * Stepen(x, y - 1);
        return result;
    }
}

int main(){
    setlocale(LC_ALL, "ru");

    int x = 2;
    int y = 5;

    cout << "Возведение " << x << " в " << y << " = " << Stepen(x,y);

    return 0;
}