package com.company;
import java.util.Scanner; // ������ ��� ���� ����� ������� ������ � ����������
public class Main {


    public static void main(String[] args) {
        int open=0,close=0; // ���������� ��� �������� ������
        System.out.println("������� ������ � ��������: ");
        Scanner scan = new Scanner(System.in);// ���� ������ � ���������� � ������ �� � ���������� str
        String str = scan.nextLine();
        for (int i=0; i< str.length(); i++){
            if(str.charAt(i)=='('){ // str.charatAt(i) ���������� ������ ������������� �� ������� ���� �� ����� ������ ������� ��
                open = ++open; // ��������� (����������� �� ����)
            }
            if(str.charAt(i)==')'){
                close= ++close;
            }
        }
        if(open==close){ // ���� ����� �� �������� ��� ���������
            System.out.println("����� ������������� � ������������� ������ ���������");
        }
        else // ����� ������� ��� ������
        {
            System.out.println("����� ������������� � ������������� ������ ������");
        }
    }
}