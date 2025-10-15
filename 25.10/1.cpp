//F10 = запуск откладчика
//Ctrl + D + A - если отсуствует панель переменных
//Shift + F5 = остановка
// F9 - точка остановки
// // F5 - запуск с точкой остановки

#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 10; j++) {
			int otvet = i * j;
			cout << i << " * " << j << " = " << otvet << endl;
		}
		cout << endl;
	}
	return 0;
}












