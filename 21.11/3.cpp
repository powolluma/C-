#include <iostream>
using namespace std;

int Sum(int a, int b){
    if(a > b){
        return 0;
    }   
    return a + Sum(a + 1, b);
}

int main(){
    setlocale(LC_ALL, "ru");

    int a, b;
    
    cout << "Введите a: ";
    cin >> a;
    cout << endl;
    cout << "Введите b: ";
    cin >> b;
    cout << endl;

    cout << "Сумма: " << Sum(a,b);

    return 0;
}