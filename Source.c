#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h> 

#include <string.h> 

#include <locale.h> 

#include <windows.h> 

#include "Pass.h" 



/* ����� ���� � ������ ������ ���������� ������ */

int Menu(void)

{

    int c = 0;



    while ((c < '0' || c > '9'))

    {

        printf("1 : ���������� ���� ������\n"

            "2 : ���������� ������ � ����\n"

            "3 : �������� �������� ������ �� ����\n"

            "4 : ����� ������ �� ��������� ����\n"

            "5 : �������������� �������� ������ � ����\n"

            "6 : ���������� ������ � ���� �� ��������� ����\n"

            "7 : ����� �� ����� ����������� ���� � ��������� ����\n"

            "8 : ��������� ���� � ����\n"

            "9 : ��������� ���� �� �����\n"

            "0 : ����� �� ���������\n"

            "��� ����� >");

        c = _getch();

        printf("%c\n", c);

    }

    return c;

} /* End of 'Menu' function */





/* �������� ������� */

void main()

{

    setlocale(LC_ALL, "Russian");

    SetConsoleCP(1251);

    SetConsoleOutputCP(1251);

    setlocale(LC_ALL, "rus");

    int Selection;

    int k = 1;



    Number = 0;

    do

    {

        switch (Selection = Menu())

        {

        case '1':

            Fill();

            break;

        case '2':

            Add();

            break;

        case '3':

            Del();

            break;

        case '4':

            Search();

            break;

        case '5':

            Edit();

            break;

        case '6':

            Sort();

            break;

        case '7':

            Print();

            break;

        case '8':

            Save();

            break;

        case '9':

            Load();

            break;

        case '0':

            k = 0;

            break;

        }

    } while (k == 1);

}