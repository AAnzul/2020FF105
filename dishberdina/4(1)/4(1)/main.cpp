#include <iostream>
#include <math.h>
#include <clocale>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, s1, s2;
    cout << "������� ������ ��������� ";
    cin >> a;
    cout << "������� ������ �������� ";
    cin >> b;
    s1 = 10 * a;
    s2 = 0;
    for (int i = 1; i < 10; i++)
    {
        s2 = s2 + b;
        b = b * 1.03;
    };
    cout << "��������� �� 10 ������� = " << s1;
    cout << "������� �� 10 ������� = " << s2;
    if (s2 <= s1)
    {
        cout << "������ ��������� ";
    }
    else
    {
        cout << "����� ��������� � ���������" << s2 - s1 << "������";
    }
}
