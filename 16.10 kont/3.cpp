#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    int x;
    cout << "Введите Х: ";
    cin >> x;

    if (x % 3 == 0 && x % 5 == 0) {
        cout << "FizzBuzz";
    }
    else if (x % 3 == 0) {
        cout << "Fizz";
    }
    else if (x % 5 == 0) {
        cout << "Buzz";
    }

    return 0;
}