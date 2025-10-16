#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    int one, two, three;
    cout << "Введите первое число: ";
    cin >> one;
    cout << "Введите второе число: ";
    cin >> two;
    cout << "Введите третье число: ";
    cin >> three;

    if (one > two && one > three) {
        cout << "Наибольшее число: " << one;
    }
    else if (two > one && two > three) {
        cout << "Наибольшее: " << two;
    }
    else if (three > one && three > two) {
        cout << "Наибольшее: " << three;
    }
    else {
        cout << "Неккоректный ввод!";
    }


    return 0;
}










