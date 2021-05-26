#include <iostream>
using namespace std;
int dlina(int a)
{
    if ((a / 10) > 0)
    {
        return(dlina(a / 10) + 1);
    }
    else {
        return 1;
    }
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int a, l;
    cout << "Введите натуральное число: ";
    cin >> a;
    l = dlina(a);
    cout << "Количество цифр в заданном числе: " << l;
    cin.get();
    cin.get();
    return 0;
}

