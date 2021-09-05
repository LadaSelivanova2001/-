#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <string.h> 
#include <locale.h> 
#include <windows.h> 
#include "Pass.h" 

//редактирование 
void Edit()
{
    int h, k;

A: printf("Введите номер пассажира, информацию о котором хотите скорректировать > ");
    scanf("%d", &h);
    if (h > Number || h < 1)
        goto A;
    printf("Выберите поле, по которому будет произведена корректировка\n1-Фамилия\n2-Имя\n3-Отчество\n4-Номер каюты\n5-Тип каюты\n6-Страна проживания\n7-Порт назначения\n> ");
    scanf("%d", &k);
    do
    {
        switch (k)
        {
        case 1:
            printf("Введите новую фамилию >");
            scanf("%s", Men[h - 1].Surname);
            break;
        case 2:
            printf("Введите новое имя >");
            scanf("%s", Men[h - 1].Name);
            break;
        case 3:
            printf("Введите новое отчество >");
            scanf("%s", Men[h - 1].Otch);
            break;
        case 4:
            printf("Введите новый номер каюты >");
            scanf("%d", &Men[h - 1].NumRoom);
            break;
        case 5:
            printf("Введите новый тип каюты >");
            scanf("%d", &Men[h - 1].TypeRoom);
            break;
        case 6:
            printf("Введите новую страну проживания >");
            scanf("%s", Men[h - 1].Country);
            break;
        case 7:
            printf("Введите новый порт назначения >");
            scanf("%s", Men[h - 1].End);
            break;
        }
    } while (k > 7 || k < 0);
}
