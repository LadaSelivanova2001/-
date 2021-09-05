#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h> 

#include <string.h> 

#include <locale.h> 

#include <windows.h> 

/* Структура для хранения информации про одного человека */

typedef struct pass

{

    char Otch[20], Surname[20], Name[20], Country[20], End[20];

    int NumRoom, TypeRoom;

} ITEM;



/* Массив максимум на 20 человек */

ITEM Men[20];



/* Количество занятых элементов в массиве */

int Number;

