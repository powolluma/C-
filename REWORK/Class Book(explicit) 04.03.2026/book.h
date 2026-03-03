#pragma once
#include <iostream>
#include <string>
using namespace std;

//Класс Book
class Book {
	string author;
	string name;
	string publish; //издательство
	int year;
	int count;		
	int page;

public:
	//Конструктор explicit (Чтобы не было неявных преобразований)
	explicit Book(const string& Bookauthor = "", const string& Bookname = "", const string& Bookpublish = "", const int& Bookyear = 0, const int& Bookcount = 0, const int& Bookpage = 0)
		: author(Bookauthor), name(Bookname), publish(Bookpublish), year(Bookyear), count(Bookcount), page(Bookpage){}

	//Геттеры
	string getAuthor() const { return author; }
	string getName() const { return name; }
	string getPublish() const { return publish; }
	int getYear() const { return year; }
	int getCount() const { return count; }
	int getPage() const { return page; }

	//Методы

	//Вывод книги
	void ShowBook() const;

	//Поиск книги по Автору
	void PrintBookFromAuthor(const Book book[], int size, const string& author) const;

	//Поиск книги по Издательству
	void PrintBookFromPublish(const Book book[], int size, const string& publish) const;

	//Список книг после определенного Года
	void PrintBookFromYear(const Book book[], int size, int year) const;
};
