#include <iostream>
#include <algorithm>  
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int n, mas[10];
    cout << "������� ���������� ��������� � ������������������: n= ";
    cin >> n;
    cout << "������� ������������������ �� " << n << " ����� �����: " << '\n';

    for (int i = 0; i < n; i++)
    {
        cin >> mas[i];
    }

    int max = mas[0];
    int min = mas[0];

    for (int i = 1; i < n; i++)
    {
        if (max > mas[i]) 
        {
            max = mas[i];

        }

        if (min < mas[i]) 
        {
            min = mas[i];

        }

    }

    cout << "����������� �����: " << max << endl;
    cout << "������������ �����: " << min << endl;
    cin.get();

}

