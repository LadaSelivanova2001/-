#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h> 

#include <string.h> 

#include <locale.h> 

#include <windows.h> 

/* ��������� ��� �������� ���������� ��� ������ �������� */

typedef struct pass

{

    char Otch[20], Surname[20], Name[20], Country[20], End[20];

    int NumRoom, TypeRoom;

} ITEM;



/* ������ �������� �� 20 ������� */

ITEM Men[20];



/* ���������� ������� ��������� � ������� */

int Number;

