#include <iostream>
using namespace std;

int main(){
    setlocale (LC_ALL, "ru");
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cout << "*" << " ";
        }
        cout << "\n";
    }
    return 0;
}

