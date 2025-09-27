#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	enum menu {
		stroky, opozdal, money,
	};



	int choise;
	cout << "Выберите опцию:\n";
	cout << "1Узнать сколько строк кода нужно Васе написать\n";
	cout << "2.Узнать сколько раз можно Васе опоздать\n";
	cout << "3.Узнать зарплату Васи по строкам и опозданиям\n";
	cin >> choise;


	
	switch (choise) {
	case stroky:
		int dohod, opazdanye;
		cout << "Желаемый доход Васи:\n";
		cin >> dohod;
		cout << "Количество опозданий:\n";
		cin >> opazdanye;

		int shtraf = (opazdanye / 3) * 20;
		int need = dohod + shtraf;
		int total_rabota = need * 2;
		cout << "Кол-во строк, которое нужно написать: " << total_rabota;
		break;
	
	
	case opozdal:
		int code, obyem;
		cout << "Количество строк кода, написанное Васей: "; //100
		cin >> code;
		cout << "Желаемый объем зарплаты: "; //50
		cin >> obyem;

		int skolko_opozdaty = 



	}




}