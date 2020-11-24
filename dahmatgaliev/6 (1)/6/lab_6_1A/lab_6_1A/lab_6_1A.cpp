#include <iostream>
using namespace std;
int nod(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else b = b - a;
    }
    return a;
}
int nok(int a, int b, int c)
{
    int d;
    d = a * b / c;
    return d;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, NOD, NOK;
    cout << "Введите первое натуральное число" << endl;
    cin >> a;
    cout << "Введите второе натуральное число" << endl;
    cin >> b;
    NOD = nod(a, b);
    NOK = nok(a, b, NOD);
    cout << "НОД = " << NOD << endl;
    cout << "НОК = " << NOK << endl;
    cin.get();
    cin.get();
    return 0;
}


