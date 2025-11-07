#include <iostream>
using namespace std;

//Функция нахождения максимального из двух чисел
int Max (int a, int b){
    return a > b ? a : b;
}
//Функция нахождения минимального из двух чисел
int Min (int a, int b){
    return a < b ? a : b;
}



int main(){
    setlocale(LC_ALL, "ru");

    int max = Max(5,15);
    int min = Min(5,15);

    cout << "Max: " << max;
    cout << endl;
    cout << "Min: " << min;

    return 0; 
}
