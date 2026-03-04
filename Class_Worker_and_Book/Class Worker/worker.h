#pragma once
#include <iostream>
#include <string>
using namespace std;

//Класс
class Worker {
private:
	string FIO;
	string Profession;
	int YearToWork;
	int Money;

public:
	explicit Worker(const string& WorkFIO = "", const string& WorkProfession = "", const int& WorkYearToWork = 0, const int& WorkMoney = 0)
		: FIO(WorkFIO), Profession(WorkProfession), YearToWork(WorkYearToWork), Money(WorkMoney){}

	//Геттеры
	string GetFIO() const { return FIO; }
	string GetProfession() const { return Profession; }
	int GetYearToWork() const { return YearToWork; }
	int GetMoney() const { return Money; }

	//Методы

	//Поиск Работников по заданному выще стажу лет
	void WorkerFromYear(const Worker workers[], int size, int YearToWork) const;

	//Поиск работников по заданной выше зарплате
	void WorkerFromMoney(const Worker workers[], int size, int Money) const;
	//Поиск работников занимающие заданную должность
	void WorkerFromProfession(const Worker workers[], int size, const string& Profession) const;
};