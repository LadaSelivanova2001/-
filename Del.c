#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h> 

#include <string.h> 

#include <locale.h> 

#include <windows.h> 

#include "Pass.h" 

/* ������� ��� �������� �������� */

void Del(void)

{

    int i;



    Print();

    printf("������� ����� ���������� �������� > ");

    scanf("%i", &i);

    if (i < 1 || i > Number)

    {

        fprintf(stderr, "������� � ������� %i �� ����������\n", i);

        return;

    }



    for (i--; i < Number - 1; i++)

        Men[i] = Men[i + 1];



    Number--;

} /* End of 'Del' function */