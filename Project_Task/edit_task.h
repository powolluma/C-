#pragma once
#include <iostream>
#include <string>
#include "task.h"
using namespace std;

//Функция редактирования задачи
void EditTask(Task tasks[], int taskCount) {
    //Условие: проверка наличия задач
    if (taskCount == 0) {
        cout << "Список пуст.\n";
        return;
    }

    int index;
    cout << "Введите номер задачи для редактирования: ";
    cin >> index;
    cin.ignore();

    //Условие: проверка на корректный ввод id задачи
    if (index < 1 || index > taskCount) {
        cout << "Неверный номер.\n";
        return;
    }

    //Ввод новых значений задачи
    cout << "Новое название: ";
    getline(cin, tasks[index - 1].name);

    cout << "Новый приоритет: ";
    getline(cin, tasks[index - 1].priority);

    cout << "Новое описание: ";
    getline(cin, tasks[index - 1].description);

    cout << "Новая дата: ";
    getline(cin, tasks[index - 1].date);

    cout << "Новое время: ";
    getline(cin, tasks[index - 1].time);

    cout << "Задача изменена.\n";
}
