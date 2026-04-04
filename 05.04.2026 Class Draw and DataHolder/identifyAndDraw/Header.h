#pragma once
#include <iostream>
using namespace std;

//Базовый класс
class Shape {
private:


public:
	//Виртуальный метод
	virtual void draw() {}
};

//Производный класс
class Circle : public Shape {
private:
public:
	void draw() {
		cout << "Draw Circle" << endl;
	}
};

//Производный класс
class Rectangle : public Shape {
private:
public:
	void draw() {
		cout << "Draw Rectangle" << endl;
	}
};

//Функция для идентификации фигуры
void identifyAndDraw(Shape* s) {
	//Условие проверки типа фигуры
	//Круг 
	if (Circle* c = dynamic_cast<Circle*>(s)) {
		cout << "This Circle" << endl;
		c->draw();
	}
	//Прямоугольник
	else if (Rectangle* r = dynamic_cast<Rectangle*>(s)) {
		cout << "This Rectangle" << endl;
		r->draw();
	}
}