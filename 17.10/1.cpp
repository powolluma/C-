﻿#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	
	int a, b, count = 0;
	cout << "Введите значние А: ";
	cin >> a;
	cout << "Введите значние B: ";
	cin >> b;
	cout << "\n";
	
	for (int i = a; i <= b; i++) {
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) {
				cout << j << " ";
			}
		}
		cout << endl;
	}









	return 0;
}