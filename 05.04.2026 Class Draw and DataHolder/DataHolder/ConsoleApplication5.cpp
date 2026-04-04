#include <iostream>
#include "Header.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	//Создание объекта
	DataHolder data;

	//Передача по константной ссылке
	modifyData(data);

	return 0;
}
