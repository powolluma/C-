#include <iostream>
#include <string>
#include "book.h"
using namespace std;

//Методы

//Вывод книги
void Book::ShowBook() const{
	cout << "Автор: " << author << endl;
	cout << "Название: " << name << endl;
	cout << "Издание: " << publish << endl;
	cout << "Год: " << year << endl;
	cout << "Количество: " << count << endl;
	cout << "Страницы: " << page << endl;
}

//Вывод книги по Автору
void Book::PrintBookFromAuthor(const Book book[], int size, const string& author) const{
	for (int i = 0; i < size; i++) {
		if (book[i].getAuthor() == author) {
			book[i].ShowBook();
			cout << endl;
		}
	}
}

//Вывод книги по Издательству
void Book::PrintBookFromPublish(const Book book[], int size, const string& publish) const {
	for (int i = 0; i < size; i++) {
		if (book[i].getPublish() == publish) {
			book[i].ShowBook();
			cout << endl;
		}
	}
}	

//Поиск книги после определенного год
void Book::PrintBookFromYear(const Book book[], int size, int year) const {
	for (int i = 0; i < size; i++) {
		if (book[i].getYear() >= year) {
			book[i].ShowBook();
			cout << endl;
		}
	}
}