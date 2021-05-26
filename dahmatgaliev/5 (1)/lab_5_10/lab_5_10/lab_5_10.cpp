
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int i, a, p;
    cout << " Числа, которые при возведении в квадрат дают палиндромы" << endl;
    for (i = 1; i <= 10000; i++)
    {
        a = i * i;
        p = 0;
        while (a > 0)
        {
            p = p * 10 + a % 10;
            a = a / 10;
        }
        if (p == i * i)
        {
            cout << i << " и " << -i << endl;
        }
    }
    cin.get();
    cin.get();
    return 0;
}

 