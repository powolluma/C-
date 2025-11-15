#include <iostream>
using namespace std;

void Massiv(int a){
    if(a == 0){
        return;
    }
    cout << " * ";
    Massiv(a - 1);
}

int main(){
    setlocale(LC_ALL, "ru");

    int n;
    cout << "Введите значение N: ";
    cin >> n;

    Massiv(n);

    return 0;
}