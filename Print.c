#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <string.h> 
#include <locale.h> 
#include <windows.h> 
#include "Pass.h"

/* Ôóíêöèÿ äëÿ âûâîäà âñåõ ýëåìåíòîâ */
void Print(void)
{
    int i;
    printf("\n\n%2s.|%20s|%20s|%20s|%20s|%70s|%20s|%20s|\n", "N", "Ôàìèëèÿ", "Èìÿ", "Îò÷åñòâî", "Íîìåð êàþòû", "Òèï êàþòû ('0'- ëþêñ, '1','2','3'-1, 2 è 3 êëàññû ñîîòâåòñòâåííî)", "Ñòðàíà ïðîæèâàíèÿ", "Ïîðò íàçíà÷åíèÿ");
    for (i = 0; i < Number; i++)
        printf("%2i.|%20s|%20s|%20s|%20d|%70d|%20s|%20s|\n", i + 1, Men[i].Surname,
            Men[i].Name, Men[i].Otch, Men[i].NumRoom, Men[i].TypeRoom, Men[i].Country, Men[i].End);
} /* End of 'Print' function */
