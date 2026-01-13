#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    
    cout << "Stroka: ";
    getline(cin, text);         //Ввод строки
    
    int count = 0;   //Счетчик
    while (text[count] != '\0') { //Цикл: пока элемент строки не дошел до конца, прибавляем счетчик
        count++;
    }
    
    cout << "Stroka: " << text << " = " << count << " symbols" << endl; //Вывод результата
    
    return 0;
}