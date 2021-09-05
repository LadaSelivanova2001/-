#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <string.h> 
#include <locale.h> 
#include <windows.h> 

/* Ñòðóêòóðà äëÿ õðàíåíèÿ èíôîðìàöèè ïðî îäíîãî ÷åëîâåêà */
typedef struct pass
{
    char Otch[20], Surname[20], Name[20], Country[20], End[20];
    int NumRoom, TypeRoom;
} ITEM;

/* Ìàññèâ ìàêñèìóì íà 20 ÷åëîâåê */
ITEM Men[20];

/* Êîëè÷åñòâî çàíÿòûõ ýëåìåíòîâ â ìàññèâå */
int Number;
