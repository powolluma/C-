//F10 = запуск откладчика
//Ctrl + D + A - если отсуствует панель переменных
//Shift + F5 = остановка
// F9 - точка остановки
// // F5 - запуск с точкой остановки

#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    int number;
    cout << "Введите диапазон простых чисел: ";
    cin >> number;

    for (int i = 2; i <= number; i++) {
        int isPrime = 1; 
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = 0; 
                break;
            }
        }
        if (isPrime == 1) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}











