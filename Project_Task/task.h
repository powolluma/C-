#pragma once
#include <string>

const int MAX_TASKS = 100;

struct Task {
    std::string name;
    std::string priority;
    std::string description;
    std::string date;
    std::string time;
};
