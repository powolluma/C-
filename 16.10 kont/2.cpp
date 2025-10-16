#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    int n;
    cout << "Введите размер таблицы: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << i * j << " ";
        }
        cout << endl;
    }

    return 0;
}