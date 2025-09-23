#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    int mesaq, number;
    cout << "Напишите число месяца от 1 до 12: \n";
    cin >> mesaq;
    cout << "Напишите день месяца: \n";
    cin >> number;

    if (mesaq == 12) {
        cout << "Зима. ";
        if (number < 31) {
            cout << "Это не последний день месяца";
        }
        else {
            cout << "Это последний день месяца";
        }
    }
    else if (mesaq == 1) {
        cout << "Зима. ";
        if (number < 31) {
            cout << "Это не последний день месяца";
        }
        else {
            cout << "Это последний день месяца";
        }
    }
    else if (mesaq == 2) {
        cout << "Зима. ";
        if (number < 28) {
            cout << "Это не последний день месяца";
        }
        else {
            cout << "Это последний день месяца";
        }
    }
    else if (mesaq == 3) {
        cout << "Весна. ";
        if (number < 31) {
            cout << "Это не последний день месяца";
        }
        else {
            cout << "Это последний день месяца";
        }
    }
    else if (mesaq == 4) {
        cout << "Весна. ";
        if (number < 30) {
            cout << "Это не последний день месяца";
        }
        else {
            cout << "Это последний день месяца";
        }
    }
    else if (mesaq == 5) {
        cout << "Весна. ";
        if (number < 31) {
            cout << "Это не последний день месяца";
        }
        else {
            cout << "Это последний день месяца";
        }
    }
    else if (mesaq == 6) {
        cout << "Лето. ";
        if (number < 30) {
            cout << "Это не последний день месяца";
        }
        else {
            cout << "Это последний день месяца";
        }
    }
    else if (mesaq == 7) {
        cout << "Лето. ";
        if (number < 31) {
            cout << "Это не последний день месяца";
        }
        else {
            cout << "Это последний день месяца";
        }
    }
    else if (mesaq == 8) {
        cout << "Лето. ";
        if (number < 31) {
            cout << "Это не последний день месяца";
        }
        else {
            cout << "Это последний день месяца";
        }
    }
    else if (mesaq == 9) {
        cout << "Осень. ";
        if (number < 30) {
            cout << "Это не последний день месяца";
        }
        else {
            cout << "Это последний день месяца";
        }
    }
    else if (mesaq == 10) {
        cout << "Осень. ";
        if (number < 31) {
            cout << "Это не последний день месяца";
        }
        else {
            cout << "Это последний день месяца";
        }
    }
    else if (mesaq == 11) {
        cout << "Осень. ";
        if (number < 30) {
            cout << "Это не последний день месяца";
        }
        else {
            cout << "Это последний день месяца";
        }
    }
    else {
        cout << "Некорректный номер месяца!";
    }

    return 0;
}