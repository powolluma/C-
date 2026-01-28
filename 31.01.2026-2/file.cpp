#include <iostream>
#include <stdio.h>   //Подключение библиотеки для работы с файлами
#include <cstring>  
#define _CRT_SECURE_NO_WARNINGS //Отключить предупреждения
using namespace std;

//Структура сотрудника
struct Employee {
    char lastName[30];   // Фамилия
    char firstName[30];  // Имя
    int age;             // Возраст
    char position[30];   // Должность
};

//Глобальные данные
const int MAX = 10;          //Максимальное количество сотрудников
Employee employees[MAX];      //Массив сотрудников
int countEmp = 0;             //Текущее количество сотрудников
char fileName[50];            //Имя файла с данными сотрудников

// Функция загрузки данных из файла
void loadFromFile() {
    //Работа с файлом - открытие
    FILE* f = fopen(fileName, "r");
    //Условие: проверка на наличие файла
    if (f == NULL) {
        cout << "Файл не найден" << endl;
        return;
    }
    // Цикл работает, пока не достигнут конец файла
    while (!feof(f)) {
        //Условие: fscanf пытается считать 4 элемента по структуре сотрудника
        if (fscanf(f, "%s %s %d %s",
            employees[countEmp].lastName,
            employees[countEmp].firstName,
            &employees[countEmp].age,
            employees[countEmp].position) == 4) {
            // Увеличиваем количество сотрудников
            countEmp++;
        }
    }
    // Закрытие файла
    fclose(f);
}

//Функция сохранения данных в файл
void saveToFile() {
    //Работа с файлом - перезапись
    FILE* f = fopen(fileName, "w");
    //Цикл: запись всех сотрудников
    for (int i = 0; i < countEmp; i++) {
        fprintf(f, "%s %s %d %s\n",
            employees[i].lastName,
            employees[i].firstName,
            employees[i].age,
            employees[i].position);
    }
    // Закрытие файла
    fclose(f);
}

//Функция добавления нового сотрудника
void addEmployee() {
    //Условие: проверка на переполнение массива
    if (countEmp >= MAX) return;
    // Ввод данных сотрудника
    cout << "Фамилия: ";
    cin >> employees[countEmp].lastName;
    cout << "Имя: ";
    cin >> employees[countEmp].firstName;
    cout << "Возраст: ";
    cin >> employees[countEmp].age;
    cout << "Должность: ";
    cin >> employees[countEmp].position;
    //Увеличиваем счётчик сотрудников
    countEmp++;
}

//Функция редактирования данных сотрудника по фамилии
void editEmployee() {
    char lastName[30];
    cout << "Введите фамилию: ";
    cin >> lastName;
    //Цикл: идет по кол-ву сотрудников
    for (int i = 0; i < countEmp; i++) {
        //Если сотрудник по фамилии найден
        if (strcmp(employees[i].lastName, lastName) == 0) {
            // Ввод новых данных
            cout << "Новое имя: ";
            cin >> employees[i].firstName;
            cout << "Новый возраст: ";
            cin >> employees[i].age;
            cout << "Новая должность: ";
            cin >> employees[i].position;
            return;
        }
    }
    //Иначе ошибка
    cout << "Сотрудник не найден\n";
}

//Функция удаления сотрудника по фамилии
void deleteEmployee() {
    char lastName[30];
    cout << "Введите фамилию для удаления: ";
    cin >> lastName;
    //Цикл: идет по кол-ву сотрудников
    for (int i = 0; i < countEmp; i++) {
        //Условие: если найден сотрудник по фамилии
        if (strcmp(employees[i].lastName, lastName) == 0) {
            //Сдвиг элементов массива влево
            for (int j = i; j < countEmp - 1; j++) {
                employees[j] = employees[j + 1];
            }
            //Уменьшаем количество сотрудников
            countEmp--;
            cout << "Сотрудник удалён\n";
            return;
        }
    }
    //Иначе ошибка
    cout << "Сотрудник не найден\n";
}


//Функция вывода всех сотрудников
void showAll() {
    //Цикл: идет по кол-ву сотрудников
    for (int i = 0; i < countEmp; i++) {
        //Вывод информации по каждому сотруднику
        cout << i + 1 << ". " << employees[i].lastName << " " << employees[i].firstName << ", " << employees[i].age << ", " << employees[i].position << endl;
    }
}

//Поиск сотрудника по фамилии
void findByLastName() {
    char lastName[30];
    cout << "Введите фамилию: ";
    cin >> lastName;
    //Работа с файлом - запись
    FILE* f = fopen("result.txt", "w");
    //Цикл: идет по кол-ву сотрудников
    for (int i = 0; i < countEmp; i++) {
        //Условие: если найден сотрудник - его вывод
        if (strcmp(employees[i].lastName, lastName) == 0) {
            cout << employees[i].lastName << " "
                << employees[i].firstName << endl;
            //Запись в файл информация о сотруднике
            fprintf(f, "%s %s %d %s\n",
                employees[i].lastName,
                employees[i].firstName,
                employees[i].age,
                employees[i].position);
        }
    }
    //Закрытие файла
    fclose(f);
}

//Функция поиска сотрудников по возрасту
void findByAge() {
    int age;
    cout << "Введите возраст: ";
    cin >> age;
    //Работа с файлом - запись
    FILE* f = fopen("result.txt", "w");
    //Цикл: идет по кол-ву сотрудников
    for (int i = 0; i < countEmp; i++) {
        //Условие: если найден сотрудник, то вывод 
        if (employees[i].age == age) {
            cout << employees[i].lastName << " " << employees[i].firstName << endl;
            //Запись в файл информации о сотруднике
            fprintf(f, "%s %s %d %s\n",
                employees[i].lastName,
                employees[i].firstName,
                employees[i].age,
                employees[i].position);
        }
    }
    //Закрытие файла
    fclose(f);
}

//Функиця поиска сотрудников по первой букве фамилии
void findByLetter() {
    char letter;
    cout << "Введите первую букву фамилии: ";
    cin >> letter;
    //Работа с файлом - запись
    FILE* f = fopen("result.txt", "w");
    //Цикл: идет по кол-ву сотрудников
    for (int i = 0; i < countEmp; i++) {
        //Условие: если сотрудник найден, то вывод
        if (employees[i].lastName[0] == letter) {
            cout << employees[i].lastName << " " << employees[i].firstName << endl;
            //Запись в файл информации о сотруднике
            fprintf(f, "%s %s %d %s\n",
                employees[i].lastName,
                employees[i].firstName,
                employees[i].age,
                employees[i].position);
        }
    }
    //Закрытие файла
    fclose(f);
}


//Функция вывода меню программы
void menu() {
    cout << "\n1. Добавить сотрудника";
    cout << "\n2. Редактировать сотрудника";
    cout << "\n3. Удалить сотрудника";
    cout << "\n4. Показать всех";
    cout << "\n5. Поиск по фамилии";
    cout << "\n6. Поиск по возрасту";
    cout << "\n7. Поиск по первой букве фамилии";
    cout << "\n8. Сохранить в файл";
    cout << "\n0. Выход\n";
}

int main() {
    setlocale(LC_ALL, "ru");

    // Ввод имени файла
    cout << "Введите имя файла: ";
    cin >> fileName;

    // Загрузка данных из файла
    loadFromFile();

    //Переменная для выбора
    int choice;

    //Цикл: меню работает до тех пор, пока пользователь не введет 0 (Выход)
    do {
        menu();
        cin >> choice;

        switch (choice) {
        case 1: addEmployee(); break;
        case 2: editEmployee(); break;
        case 3: deleteEmployee(); break;
        case 4: showAll(); break;
        case 5: findByLastName(); break;
        case 6: findByAge(); break;
        case 7: findByLetter(); break;
        case 8: saveToFile(); break;
        }
    } while (choice != 0);

    //Сохранение
    saveToFile();
    cout << "Данные сохранены. Выход.\n";

    return 0;
}
