#pragma once
#include <iostream>
#include <string>
#include "task.h"
using namespace std;

//Вспомогательная функция для копирования задач (для сортировки)
void copyTasks(Task source[], Task dest[], int count) {
    for (int i = 0; i < count; i++) {
        dest[i] = source[i];
    }
}

//Функция вывода задач по умолчанию
void ShowTasks(Task tasks[], int taskCount) {
    //Условие: проверка на наличия задач
    if (taskCount == 0) {
        cout << "Список пуст.\n";
        return;
    }
    //Цикл: выводим информацию о задачах, пока они не закончатся
    for (int i = 0; i < taskCount; i++) {
        cout << "\n#" << i + 1 << endl;
        cout << "Название: " << tasks[i].name << endl;
        cout << "Приоритет: " << tasks[i].priority << endl;
        cout << "Описание: " << tasks[i].description << endl;
        cout << "Дата: " << tasks[i].date << endl;
        cout << "Время: " << tasks[i].time << endl;
    }
    cout << "Нажмите Enter, чтобы продолжить\n";
}

//Функция вывода задач по приоритету
void ShowTasksByPriority(Task tasks[], int taskCount) {
    //Условие: проверка на наличие задач
    if (taskCount == 0) {
        cout << "Список пуст.\n";
        cout << "Нажмите Enter, чтобы продолжить\n";
        return;
    }

    Task tempTasks[MAX_TASKS];
    copyTasks(tasks, tempTasks, taskCount);
    //Пузырьковая сортировка
    for (int i = 0; i < taskCount - 1; i++) {
        for (int j = 0; j < taskCount - i - 1; j++) {
            if (tempTasks[j].priority > tempTasks[j + 1].priority) {
                //Меняем местами
                Task temp = tempTasks[j];
                tempTasks[j] = tempTasks[j + 1];
                tempTasks[j + 1] = temp;
            }
        }
    }
    //Вызов функции для показа задач
    ShowTasks(tempTasks, taskCount);
}

//Функция вывода задач по дате и времени
void ShowTasksByDateTime(Task tasks[], int taskCount) {
    if (taskCount == 0) {
        cout << "Список пуст.\n";
        cout << "Нажмите Enter, чтобы продолжить\n";
        return;
    }

    Task tempTasks[MAX_TASKS];
    copyTasks(tasks, tempTasks, taskCount);
    //Пузырьковая сортировка
    for (int i = 0; i < taskCount - 1; i++) {
        for (int j = 0; j < taskCount - i - 1; j++) {
            if (tempTasks[j].date > tempTasks[j + 1].date ||
                (tempTasks[j].date == tempTasks[j + 1].date &&
                    tempTasks[j].time > tempTasks[j + 1].time)) {
                //Меняем местами
                Task temp = tempTasks[j];
                tempTasks[j] = tempTasks[j + 1];
                tempTasks[j + 1] = temp;
            }
        }
    }
    //Вызов функции для показа задач
    ShowTasks(tempTasks, taskCount);
}
