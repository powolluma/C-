﻿#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	int number;
	cout << "Введите число: ";
	cin >> number;

	cout << "Число в 0 степени: " << 1 << "\n";
	cout << "Число в 1 степени: " << number << "\n";
	cout << "Число в 2 степени: " << number * number << "\n";
	cout << "Число в 3 степени: " << number * number * number << "\n";
	cout << "Число в 4 степени: " << number * number * number * number << "\n";
	cout << "Число в 5 степени: " << number * number * number * number * number << "\n";
	cout << "Число в 6 степени: " << number * number * number * number * number * number << "\n";
	cout << "Число в 7 степени: " << number * number * number * number * number * number * number << "\n";

	return 0;
}