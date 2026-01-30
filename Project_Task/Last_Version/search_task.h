#pragma once
#include <iostream>
#include <string>
#include "task.h"
using namespace std;

//Функция поиска задачи
void SearchTask(Task tasks[], int taskCount) {
    string key;
    cout << "Введите строку для поиска: ";
    getline(cin, key);

    //Изначальное значение
    bool found = false;

    //Цикл: идет по массиву существующих задач
    for (int i = 0; i < taskCount; i++) {
        //Условие: если задача нашлась по какому либо пункту задачи, то выводим ее
        //find - ищет строку, npos - значение не найдено (Библиотека string)
        if (tasks[i].name.find(key) != string::npos ||
            tasks[i].priority.find(key) != string::npos ||
            tasks[i].description.find(key) != string::npos ||
            tasks[i].date.find(key) != string::npos ||
            tasks[i].time.find(key) != string::npos) {

            cout << "\nЗадача #" << i + 1 << endl;
            cout << "Название: " << tasks[i].name << endl;
            cout << "Приоритет: " << tasks[i].priority << endl;
            cout << "Описание: " << tasks[i].description << endl;
            cout << "Дата: " << tasks[i].date << endl;
            cout << "Время: " << tasks[i].time << endl;
            cin.ignore();
            cout << "Нажмите Enter, чтобы продолжить\n";

            //Меняем значение
            found = true;
        }
    }
    //Иначе ошибка
    if (!found) {
        cout << "Совпадений не найдено.\n";
        cout << "Нажмите Enter, чтобы продолжить\n";
    }
}
