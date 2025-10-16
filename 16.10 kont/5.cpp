#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    int x = 1, a = 2, b = 4, p = 7;

    if (x < a && x < b && x < p) {
        cout << "Минимум: " << x;
    }
    else if (a < x && a < b && a < p) {
        cout << "Минимум: " << a;
    }
    else if (b < x && b < a && b < p) {
        cout << "Минимум: " << b;
    }
    else if (p < x && p < a && p < b) {
        cout << "Минимум: " << p;
    }
    else {
        cout << "Ошибка!";
    }
    return 0;
}