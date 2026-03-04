#include <iostream>
#include <string>
#include "worker.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	//Массив объектов
	Worker workers[3] = {
		Worker("И.А.Иванов", "Уборщик", 2017, 15000),
		Worker("Н.О.Петров", "Консультант", 2020, 30000),
		Worker("Р.Е.Ренатов", "Мененджер", 2010, 50000)
	};

	return 0;
}