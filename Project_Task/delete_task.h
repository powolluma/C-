#pragma once
#include <iostream>
#include <string>
#include "task.h"
using namespace std;

//Функция удаления задачи
void DeleteTask(Task tasks[], int& taskCount) {
    //Условие: проверка наличия задачи
    if (taskCount == 0) {
        cout << "Список пуст.\n";
        return;
    }

    int index;
    cout << "Введите номер задачи для удаления: ";
    cin >> index;
    cin.ignore();

    //Условие: проверка на корректный ввод id задачи
    if (index < 1 || index > taskCount) {
        cout << "Неверный номер.\n";
        return;
    }

    //Цикл: удаление задачи и смещение массива с задачи влево
    for (int i = index - 1; i < taskCount - 1; i++) {
        tasks[i] = tasks[i + 1];
    }
    //Убираем задачу
    taskCount--;
    cout << "Задача удалена.\n";
}
