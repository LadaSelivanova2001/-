#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h> 

#include <string.h> 

#include <locale.h> 

#include <windows.h> 

#include "Pass.h" 

/* ������� ��� �������������� ������� */

void Sort()

{

    int i, j, k;

    ITEM Temp;

    printf("�������� ����, �� �������� ����� ����������� ����������\n1-�������\n2-���\n3-��������\n4-����� �����\n5-��� �����\n6-������ ����������\n7-���� ����������\n> ");

    scanf("%d", &k);

    do

    {

        switch (k)

        {

        case 1:

            for (j = Number - 1; j > 0; j--)

            {

                for (i = 0; i < j; i++)

                {

                    if (strcmp(Men[i].Surname, Men[i + 1].Surname) > 0)

                    {

                        Temp = Men[i];

                        Men[i] = Men[i + 1];

                        Men[i + 1] = Temp;

                    }

                }

            }

            break;

        case 2:

            for (j = Number - 1; j > 0; j--)

            {

                for (i = 0; i < j; i++)

                {

                    if (strcmp(Men[i].Name, Men[i + 1].Name) > 0)

                    {

                        Temp = Men[i];

                        Men[i] = Men[i + 1];

                        Men[i + 1] = Temp;

                    }

                }

            }

            break;

        case 3:

            for (j = Number - 1; j > 0; j--)

            {

                for (i = 0; i < j; i++)

                {

                    if (strcmp(Men[i].Otch, Men[i + 1].Otch) > 0)

                    {

                        Temp = Men[i];

                        Men[i] = Men[i + 1];

                        Men[i + 1] = Temp;

                    }

                }

            }

            break;

        case 4:

            for (j = Number - 1; j > 0; j--)

            {

                for (i = 0; i < j; i++)

                {

                    if (Men[i].NumRoom > Men[i + 1].NumRoom)

                    {

                        Temp = Men[i];

                        Men[i] = Men[i + 1];

                        Men[i + 1] = Temp;

                    }

                }

            }

            break;

        case 5:

            for (j = Number - 1; j > 0; j--)

            {

                for (i = 0; i < j; i++)

                {

                    if (Men[i].TypeRoom > Men[i + 1].TypeRoom)

                    {

                        Temp = Men[i];

                        Men[i] = Men[i + 1];

                        Men[i + 1] = Temp;

                    }

                }

            }

            break;

        case 6:

            for (j = Number - 1; j > 0; j--)

            {

                for (i = 0; i < j; i++)

                {

                    if (strcmp(Men[i].Country, Men[i + 1].Country) > 0)

                    {

                        Temp = Men[i];

                        Men[i] = Men[i + 1];

                        Men[i + 1] = Temp;

                    }

                }

            }

            break;

        case 7:

            for (j = Number - 1; j > 0; j--)

            {

                for (i = 0; i < j; i++)

                {

                    if (strcmp(Men[i].End, Men[i + 1].End) > 0)

                    {

                        Temp = Men[i];

                        Men[i] = Men[i + 1];

                        Men[i + 1] = Temp;

                    }

                }

            }

            break;

        default:

            printf("���������� �����!\n");

            break;

        }

    } while (k > 7 || k <= 0);



} /* End of 'Sort' function */

