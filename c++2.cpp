#include <iostream>
#include <Windows.h>
using namespace std;

int main() 
{
    
    SetConsoleOutputCP(1251);
    setlocale(0, "");

    const int rows = 3;
    const int cols = 5;
    float arr[rows][cols];

    // Ввод элементов массива
    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < rows; i++) 
    {
        cout << "Строка " << i + 1;
        for (int j = 0; j < cols; j++)
        {
            cout << " Столбец " << j + 1 << ": ";
            cin >> arr[i][j];
        }
    }

    // Вычисление среднего арифметического элементов строк
    float avg[rows];
    for (int i = 0; i < rows; i++) {
        float sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
        avg[i] = sum / cols;
    }

    // Вывод среднего арифметического элементов строк
    cout << "Среднее арифметическое элементов строк:" << endl;
    for (int i = 0; i < rows; i++) {
        cout << "Строка " << i + 1 << ": " << avg[i] << endl;
    }

    return 0;
}