﻿#include <iostream>
#include <algorithm>  
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int k, i, t,n,b,j, mas[10];
    cout << "Введите колличество эллементов числовой последовательности: ";
    cin >> n;
    cout << "Введите эллементы последовательности (пусть хотя бы 2 эллемента будут равного значения) " << '\n';
    for (i = 1; i <= n; i++)
    {
        cin >> mas[i];
    };//ввела массив

    //Дальше решила для начала просто найти, имеются ли повторяющиеся элементы. Но в процессе программа выдаёт ошибку "вызвано исключение...нарушение прав доступа при чтении".
    //Нашла, что такую ошибку выдаёт, если размер массива превышает изначально заданный (в моём случае- 10).
    //В таблице видимых значений переменных вижу, что i почему-то равно 434. Не могу понять, в чём проблема.
    for (i = 0; i <= n; i++)
    {
        for (j = i + 1; j < n; i++)
        {
            if (mas[i] == mas[j])
            {
                cout << "есть";
            }
            else
            {
                cout << "нет";
            }
        };
    }
   
};

   

