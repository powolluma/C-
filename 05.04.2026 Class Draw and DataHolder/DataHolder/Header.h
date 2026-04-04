#pragma once
#include <iostream>
using namespace std;

class DataHolder {
private:
	//Внутренний массив
	int data[5] = {1,2,3,4,5};

public:
	//Метод 
	const int *getData() const {
		return data;
	}
};

//Изменение первого элемента массива
int modifyData(const DataHolder& dh){

	//Снятие константности
	DataHolder& Dh = const_cast<DataHolder&>(dh);

	//Получение указателя на данные
	int* dataPtr = const_cast<int*>(Dh.getData());

	//Изменение данных
	dataPtr[0] = 999;

}