#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h> 

#include <string.h> 

#include <locale.h> 

#include <windows.h> 

#include "Pass.h" 

/*������� ���������� ���� ������*/

int Fill()

{

    int i, g;

H: printf("������� ���������� ����������, ������� ���������� ������ � ���� ������ > ");



    scanf("%d", &Number);

    if (Number > 19 || Number <= 0)

    {

        printf("������������ �����!\n");

        goto H;

    }

    g = Number;

    for (Number = 0; Number < g; Number++)

    {

    A: printf("������� ������� > ");

        scanf("%20s", Men[Number].Surname);

        for (i = 0; i < strlen(Men[Number].Surname); i++)

        {

            if ((Men[Number].Surname[i] <= 'z' && Men[Number].Surname[i] >= 'a') || (Men[Number].Surname[i] <= 'Z' && Men[Number].Surname[i] >= 'A') || (Men[Number].Surname[i] <= '�' && Men[Number].Surname[i] >= '�') || (Men[Number].Surname[i] <= '�' && Men[Number].Surname[i] >= '�'))

            {

                continue;

            }

            else

            {

                printf("�������� ������!\n");

                goto A;

            }

        }

    B: printf("������� ��� > ");

        scanf("%20s", Men[Number].Name);

        for (i = 0; i < strlen(Men[Number].Name); i++)

        {

            if ((Men[Number].Name[i] <= 'z' && Men[Number].Name[i] >= 'a') || (Men[Number].Name[i] <= 'Z' && Men[Number].Name[i] >= 'A') || (Men[Number].Name[i] <= '�' && Men[Number].Name[i] >= '�') || (Men[Number].Name[i] <= '�' && Men[Number].Name[i] >= '�'))

            {

                continue;

            }

            else

            {

                printf("�������� ������!\n");

                goto B;

            }

        }

    C: printf("������� �������� > ");

        scanf("%20s", Men[Number].Otch);

        for (i = 0; i < strlen(Men[Number].Otch); i++)

        {

            if ((Men[Number].Otch[i] <= 'z' && Men[Number].Otch[i] >= 'a') || (Men[Number].Otch[i] <= 'Z' && Men[Number].Otch[i] >= 'A') || (Men[Number].Otch[i] <= '�' && Men[Number].Otch[i] >= '�') || (Men[Number].Otch[i] <= '�' && Men[Number].Otch[i] >= '�'))

            {

                continue;

            }

            else

            {

                printf("�������� ������!\n");

                goto C;

            }

        }

    D: printf("������� ����� ����� > ");

        scanf("%d", &Men[Number].NumRoom);

        if (Men[Number].NumRoom < 0)

        {

            printf("�������� ������!\n");

            goto D;

        }



    E:  printf("������� ��� ����� ('0'- ����, '1','2','3'-1, 2 � 3 ������ ��������������) > ");

        scanf("%d", &Men[Number].TypeRoom);

        if (Men[Number].TypeRoom > 3 || Men[Number].TypeRoom < 0)

        {

            printf("�������� ������!\n");

            goto E;

        }

    F: printf("������� ������ ���������� > ");

        scanf("%20s", Men[Number].Country);

        for (i = 0; i < strlen(Men[Number].Country); i++)

        {

            if ((Men[Number].Country[i] <= 'z' && Men[Number].Country[i] >= 'a') || (Men[Number].Country[i] <= 'Z' && Men[Number].Country[i] >= 'A') || (Men[Number].Country[i] <= '�' && Men[Number].Country[i] >= '�') || (Men[Number].Country[i] <= '�' && Men[Number].Country[i] >= '�'))

            {

                continue;

            }

            else

            {

                printf("�������� ������!\n");

                goto F;

            }

        }

    G:printf("������� ���� ���������� > ");

        scanf("%20s", Men[Number].End);

        for (i = 0; i < strlen(Men[Number].End); i++)

        {

            if ((Men[Number].End[i] <= 'z' && Men[Number].End[i] >= 'a') || (Men[Number].End[i] <= 'Z' && Men[Number].End[i] >= 'A') || (Men[Number].End[i] <= '�' && Men[Number].End[i] >= '�') || (Men[Number].End[i] <= '�' && Men[Number].End[i] >= '�'))

            {

                continue;

            }

            else

            {

                printf("�������� ������!\n");

                goto G;

            }

        }

    }

    return Number;

}