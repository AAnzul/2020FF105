#include <iostream>
#include <cmath>
using namespace std;

int f(int a, int b, int c, int d, int x)
{
    return a * pow(x,3) + b * pow(x,2) + c * x + d;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, c, d;
    cout << "Введите a, не равное 0: ";
    cin >> a;
    cout << "Введите b: ";
    cin >> b;
    cout << "Введите c: ";
    cin >> c;
    cout << "Введите d, не равное 0: ";
    cin >> d;
    bool k = false;
    for (int i = 1; i <= abs(d); i++)
        if (d % i == 0)
        {
            if (f(a, b, c, d, i) == 0)
            {
                cout << "Корень = " << i << endl;
                k = true;
            }

            if (f(a, b, c, d, -i) == 0)
            {
                cout << "Корень = " << -i << endl;
                k = true;
            }
        }
    if (k == false)
        cout << "Целых корней нет" << endl;
    cin.get();
    cin.get();
    return 0;
}

