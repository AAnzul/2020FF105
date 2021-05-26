
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double e;
    cout << "Введите е: ";
    cin >> e;
    double a;
    double n = 1;
    double s = 0;
    a =(double) 1 / 2 + (double) 1 / 3;
    while (a >= e)
    {
        s = s + a;
        n++;
        a = (double) 1 / pow(2, n) + (double) 1 / pow(3, n);
    }
    cout << "Сумма ряда: " << s;
    cin.get();
    cin.get();
    return 0;
}