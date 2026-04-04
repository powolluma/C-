#include <iostream>
#include "Header.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	//Создание объектов
	Circle c;
	Rectangle r;

	//Применение
	identifyAndDraw(&c);
	identifyAndDraw(&r);

	return 0;
}
