﻿#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	int choose, easy, medium, hard;
	cout << "ПРОГРАММА\n";
	cout << "Выберите уровень сложности:\n";
	cout << "1.Легкий\n2.Средний\n3.Сложный: ";
	cin >> choose;

	switch (choose) {
	case 1:
		for (int i = 1; i <= 3; i++) {
			for (int j = 1; j <= 10; j++) {
				int otvet;
				cout << i << "*" << j << "=";
				cin >> otvet;
				if (i * j == otvet) {
					cout << "Верно!\n";
					cout << endl;
				}
				else {
					cout << "Неверно!\n";
					cout << endl;
				}
			}
		}
		break;
	case 2:
		for (int i = 4; i <= 7; i++) {
			for (int j = 1; j <= 10; j++) {
				int otvet;
				cout << i << "*" << j << "=";
				cin >> otvet;
				if (i * j == otvet) {
					cout << "Верно!\n";
					cout << endl;
				}
				else {
					cout << "Неверно!\n";
					cout << endl;
				}
			}
		}
		break;
	case 3:
		for (int i = 8; i <= 9; i++) {
			for (int j = 1; j <= 10; j++) {
				int otvet;
				cout << i << "*" << j << "=";
				cin >> otvet;
				if (i * j == otvet) {
					cout << "Верно!\n";
					cout << endl;
				}
				else {
					cout << "Неверно!\n";
					cout << endl;
					
				}
			}
		}
		break;
	}
	return 0;
}