//F10 = запуск откладчика
//Ctrl + D + A - если отсуствует панель переменных
//Shift + F5 = остановка
// F9 - точка остановки
// // F5 - запуск с точкой остановки

#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int m, n;
    cout << "Введите M: ";
    cin >> m;
    cout << "Введите N: ";
    cin >> n;

    int num = 1;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << num << "   ";
            num++;
        }
        cout << endl;
    }

    return 0;
}










