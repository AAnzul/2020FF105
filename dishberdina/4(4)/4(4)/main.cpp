#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    setlocale(0, "russian");
    float a, b, h, F, x;
    cout << "����������:\n�� ";
    cin >> a;
    cout << "�� ";
    cin >> b;
    cout << "���: ";
    cin >> h;
    x = a;
    do
    {
        F = 2 * tan(x / 2) + 1;
        cout << "x=" << x << '\t' << "F(x)=" << F << endl;   
        x += h;
        if (x == 0)      
            x += h;    
    } while (x <= b);
    system("PAUSE");
    return 0;
}