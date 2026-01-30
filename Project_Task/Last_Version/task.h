#pragma once
#include <iostream>
#include <string>
using namespace std;

//Массив, содержащий все задачи
const int MAX_TASKS = 100;

//Структура задачи
struct Task {
    string name;
    string priority;
    string description;
    string date;
    string time;
};
