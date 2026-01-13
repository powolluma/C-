#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "ru");

    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},              //Матрица
        {7, 8, 9}
    };
    
    cout << "Matrix:\n";
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){         //Цикл внутри цикла: вывод матрицы
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for(int i = 0; i < 3; i++){
        int sum = 0;
        for(int j = 0; j < 3; j++){         //Цикл внутри цикла: сложение матрицы
            sum += matrix[i][j];
        }
        cout << "Sum = " << sum << "\n";    //Вывод результата
    }

    return 0;
}