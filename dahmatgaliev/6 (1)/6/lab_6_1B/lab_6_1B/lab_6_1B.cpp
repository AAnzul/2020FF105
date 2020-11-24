#include <iostream>
using namespace std;
int dlina(int a)
{
    int c = 0;
    while (a != 0)
    {
        c++;
        a = a / 10;
    }
    return c;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, l1, l2;
    cout << "Введите первое число: " << endl;
    cin >> a;
    cout << "Введите второе число: " << endl;
    cin >> b;
    l1 = dlina(a);
    l2 = dlina(b);
    if (l1 > l2)
    {
        cout << "В " << a << " больше цифр." << endl;
    }
    else if (l2 > l1)
    {
        cout << "В " << b << " больше цифр." << endl;
    }
    else
    {
        cout << "Количество цифр одинаково." << endl;
    }
    cin.get();
    cin.get();
    return 0;
}

