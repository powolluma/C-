#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;




void Arr(int array[]) {
    for (int i = 0; i < 100; i++) {
        array[i] = rand() % 10;
    }
}

void MinArr(){

}



int main(){
    setlocale(LC_ALL, "ru");
    srand(time(NULL));

    int array[100];
    Arr(array);
    

    cout << "Минимальное: ";
    cout << "Начинается с: ";

    return 0;
}