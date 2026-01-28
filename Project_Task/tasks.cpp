#include <iostream>
#include "task.h"           //Структура
#include "add_task.h"       //Функция добавления задачи
#include "delete_task.h"    //Функция удаления задачи
#include "edit_task.h"      //Функция редактирования задачи
#include "search_task.h"    //Функция поиска задачи
#include "show_task.h"      //Функция вывода задач

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    //Массив с задачами
    Task tasks[MAX_TASKS];
    //Переменная для счетчика кол-ва текущих задач
    int taskCount = 0;
    //Переменная для выбора
    int choice;

    //Цикл: работает меню пользователя, пока пользователь не введет 0(Выход)
    do {
        //Меню выбора
        cout << "\n=== Список дел ===\n";
        cout << "1. Добавить\n";
        cout << "2. Удалить\n";
        cout << "3. Редактировать\n";
        cout << "4. Поиск\n";
        cout << "5. Показать все\n";
        cout << "0. Выход\n";
        cout << "Выбор: ";
        cin >> choice;
        cin.ignore();

        //Switch case с выбором
        switch (choice) {
        case 1: AddTask(tasks, taskCount); break;       //Добавить 
        case 2: DeleteTask(tasks, taskCount); break;    //Удалить
        case 3: EditTask(tasks, taskCount); break;      //Редактировать
        case 4: SearchTask(tasks, taskCount); break;    //Поиск
        case 5: {
            int showChoice;
            //Меню для вывода задачи
            cout << "\n1. Без сортировки\n";
            cout << "2. По приоритету\n";
            cout << "3. По дате и времени\n";
            cout << "Выбор: ";
            cin >> showChoice;
            cin.ignore();
            //Switch case с выбором показа задачи
            switch (showChoice) {
            case 1: ShowTasks(tasks, taskCount); break;             //По умолчанию
            case 2: ShowTasksByPriority(tasks, taskCount); break;   //По приоритету
            case 3: ShowTasksByDateTime(tasks, taskCount); break;   //По дате и времени
            default: cout << "Неверный выбор\n";
            }
            break;
        }
        case 0: cout << "Выход...\n"; break;    //Выход
        default: cout << "Неверный выбор!\n";   //Ошибка
        }
        cin.ignore();
    } while (choice != 0);

    return 0;
}
