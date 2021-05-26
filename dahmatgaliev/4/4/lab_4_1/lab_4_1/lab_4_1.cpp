
#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    double d = 10;
    double s;
    s = d;
    for (int i = 2; i <= 7; i++)
    {
        d = d * 1.1;
        s = s + d;
    }
    cout << "Суммарный путь за 7 дней: " << s << " км";
    cin.get();
    cin.get();
    return 0;
}

