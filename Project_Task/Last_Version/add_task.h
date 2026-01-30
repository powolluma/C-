#pragma once
#include <iostream>
#include <string>
#include "task.h"
using namespace std;

//Функция добавления задачи
void AddTask(Task tasks[], int& taskCount) {
    //Условие: проверка, есть ли в массиве ячейка для задачи
    if (taskCount >= MAX_TASKS) {
        cout << "Ошибка! Максимальное количество задач.\n";
        return;
    }

    //Ввод задачи
    cout << "\nНазвание: ";
    getline(cin, tasks[taskCount].name);

    cout << "Приоритет: ";
    getline(cin, tasks[taskCount].priority);

    cout << "Описание: ";
    getline(cin, tasks[taskCount].description);

    cout << "Дата (гггг.мм.дд): ";
    getline(cin, tasks[taskCount].date);

    cout << "Время (чч:мм): ";
    getline(cin, tasks[taskCount].time);

    //Добавляем задачу
    taskCount++;
    cout << "Задача добавлена!\n";
    cout << "Нажмите Enter, чтобы продолжить\n";
}
