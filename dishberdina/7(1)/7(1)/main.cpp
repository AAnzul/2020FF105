#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int i;
    int count = 0;
    int* A;
    int n;
    cout << "������� ����������� �������: ";
    cin >> n;
    A = new int[n];
    cout << "������� ������: " << endl;
    for (i = 0; i < n; i++)
    {
        cout << "������ " << i + 1 << " ��������� ";
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
        if (A[i] < 3) count++;
    cout << "�� �������� � ���������� �������� " << count << endl;
    system("pause");
    return 0;
}