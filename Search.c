#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h> 

#include <string.h> 

#include <locale.h> 

#include <windows.h> 

#include "Pass.h" 

//�����  

void Search()

{

    int k, g = 1, l;

    char str[20];

    printf("�������� ����, �� �������� ����� ���������� �����\n1-�������\n2-���\n3-��������\n4-����� �����\n5-��� �����\n6-������ ����������\n7-���� ����������\n> ");

    scanf("%d", &k);

    do

    {

        switch (k)

        {

        case 1:

            printf("������� �������, �� ������� ����� ��������� ����� > ");

            scanf("%s", str);

            printf("��������� ���������:\n");

            for (int i = 0; i <= Number; i++)

            {

                if (strcmp(Men[i].Surname, str) == 0)

                {

                    printf("%2i.|%20s|%20s|%20s|%20d|%20d|%20s|%20s|\n", g, Men[i].Surname, Men[i].Name, Men[i].Otch, Men[i].NumRoom, Men[i].TypeRoom, Men[i].Country, Men[i].End);

                    g++;

                }

            }

            g = 1;

            break;

        case 2:

            printf("������� ���, �� �������� ����� ��������� ����� > ");

            scanf("%s", str);

            printf("��������� ���������:\n");

            for (int i = 0; i <= Number; i++)

            {

                if (strcmp(Men[i].Name, str) == 0)

                {

                    printf("%2i.|%20s|%20s|%20s|%20d|%20d|%20s|%20s|\n", g, Men[i].Surname, Men[i].Name, Men[i].Otch, Men[i].NumRoom, Men[i].TypeRoom, Men[i].Country, Men[i].End);

                    g++;

                }

            }

            g = 1;

            break;

        case 3:

            printf("������� ��������, �� �������� ����� ��������� ����� > ");

            scanf("%s", str);

            printf("��������� ���������:\n");

            for (int i = 0; i <= Number; i++)

            {

                if (strcmp(Men[i].Otch, str) == 0)

                {

                    printf("%2i.|%20s|%20s|%20s|%20d|%20d|%20s|%20s|\n", g, Men[i].Surname, Men[i].Name, Men[i].Otch, Men[i].NumRoom, Men[i].TypeRoom, Men[i].Country, Men[i].End);

                    g++;

                }

            }

            g = 1;

            break;

        case 4:

            printf("������� ����� �����, �� �������� ����� ��������� ����� > ");

            scanf("%d", &l);

            printf("��������� ���������:\n");

            for (int i = 0; i < Number; i++)

            {

                if (Men[i].NumRoom == l)

                {

                    printf("%2i.|%20s|%20s|%20s|%20d|%20d|%20s|%20s|\n", g, Men[i].Surname, Men[i].Name, Men[i].Otch, Men[i].NumRoom, Men[i].TypeRoom, Men[i].Country, Men[i].End);

                    g++;

                }

            }

            g = 1;

            break;

        case 5:

            printf("������� ��� �����, �� �������� ����� ��������� ����� > ");

            scanf("%d", &l);

            printf("��������� ���������:\n");

            for (int i = 0; i < Number; i++)

            {

                if (Men[i].TypeRoom == l)

                {

                    printf("%2i.|%20s|%20s|%20s|%20d|%20d|%20s|%20s|\n", g, Men[i].Surname, Men[i].Name, Men[i].Otch, Men[i].NumRoom, Men[i].TypeRoom, Men[i].Country, Men[i].End);

                    g++;

                }

            }

            g = 1;

            break;

        case 6:

            printf("������� ������ ����������, �� ������� ����� ��������� ����� > ");

            scanf("%s", str);

            printf("��������� ���������:\n");

            for (int i = 0; i <= Number; i++)

            {

                if (strcmp(Men[i].Country, str) == 0)

                {

                    printf("%2i.|%20s|%20s|%20s|%20d|%20d|%20s|%20s|\n", g, Men[i].Surname, Men[i].Name, Men[i].Otch, Men[i].NumRoom, Men[i].TypeRoom, Men[i].Country, Men[i].End);

                    g++;

                }

            }

            g = 1;

            break;

        case 7:

            printf("������� ���� ����������, �� �������� ����� ��������� ����� > ");

            scanf("%s", str);

            printf("��������� ���������:\n");

            for (int i = 0; i <= Number; i++)

            {

                if (strcmp(Men[i].End, str) == 0)

                {

                    printf("%2i.|%20s|%20s|%20s|%20d|%20d|%20s|%20s|\n", g, Men[i].Surname, Men[i].Name, Men[i].Otch, Men[i].NumRoom, Men[i].TypeRoom, Men[i].Country, Men[i].End);

                    g++;

                }

            }

            g = 1;

            break;

        default:

            printf("���������� �����!\n");

            break;

        }



    } while (k > 7 || k < 1);

}