#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    
    int x, factorial = 1;
    cout << "Введите число: ";
    cin >> x;


    for (int i = 1; i <= x; i++) {
        factorial = factorial * i;
    }

    cout << "Факториал числа " << x << " = " << factorial;


    return 0;
}