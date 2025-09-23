#include <iostream>

int main() {
	setlocale(LC_ALL, "ru");
	using namespace std;
	
	int a, b, c;

	cout << "Введите три числа\n";
	cin >> a >> b >> c;

	float diskriminant = b ^ 2 - (4 * a * c);
	cout << "Дискриминант = " << diskriminant;

	return 0;
}