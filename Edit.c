#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h> 

#include <string.h> 

#include <locale.h> 

#include <windows.h> 

#include "Pass.h" 

//�������������� 

void Edit()

{

    int h, k;

A: printf("������� ����� ���������, ���������� � ������� ������ ��������������� > ");

    scanf("%d", &h);

    if (h > Number || h < 1)

        goto A;

    printf("�������� ����, �� �������� ����� ����������� �������������\n1-�������\n2-���\n3-��������\n4-����� �����\n5-��� �����\n6-������ ����������\n7-���� ����������\n> ");

    scanf("%d", &k);

    do

    {

        switch (k)

        {

        case 1:

            printf("������� ����� ������� >");

            scanf("%s", Men[h - 1].Surname);

            break;

        case 2:

            printf("������� ����� ��� >");

            scanf("%s", Men[h - 1].Name);

            break;

        case 3:

            printf("������� ����� �������� >");

            scanf("%s", Men[h - 1].Otch);

            break;

        case 4:

            printf("������� ����� ����� ����� >");

            scanf("%d", &Men[h - 1].NumRoom);

            break;

        case 5:

            printf("������� ����� ��� ����� >");

            scanf("%d", &Men[h - 1].TypeRoom);

            break;

        case 6:

            printf("������� ����� ������ ���������� >");

            scanf("%s", Men[h - 1].Country);

            break;

        case 7:

            printf("������� ����� ���� ���������� >");

            scanf("%s", Men[h - 1].End);

            break;



        }

    } while (k > 7 || k < 0);

}