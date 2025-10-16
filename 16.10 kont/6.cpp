#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    int n;
    cout << "Введите N: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 15 == 0) {
            cout << "ThreeFive";
        }
        else if (i % 3 == 0) {
            cout << "Three";
        }
        else {
            cout << i;
        }
    }
    return 0;
}