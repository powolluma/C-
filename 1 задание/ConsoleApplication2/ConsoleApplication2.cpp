#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    int a, b, c;
    cout << "Введите три стороны треугольника:\n";
    cin >> a >> b >> c;

    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "Не треугольник";
    }

    else if (a == b && b == c) {
        cout << "Равносторонний";
    }
    else if (a == b || a == c || b == c) {
        cout << "Равнобедренный";
    }
    else {
        cout << "Разносторонний";
    }

    return 0;
}