#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <windows.h>
#include "Pass.h"

/* Функция для добавления элемента */
void Add()
{
	int i;
	if (Number == 19)
	{
		fprintf(stderr, "Невозможно добавить еще один элемент!\n");
		return;
	}

A: printf("Введите фамилию > ");
	scanf("%s", Men[Number].Surname);
	for (i = 0; i < strlen(Men[Number].Surname); i++)
	{
		if ((Men[Number].Surname[i] <= 'z' && Men[Number].Surname[i] >= 'a') || (Men[Number].Surname[i] <= 'Z' && Men[Number].Surname[i] >= 'A') || (Men[Number].Surname[i] <= 'Я' && Men[Number].Surname[i] >= 'А') || (Men[Number].Surname[i] <= 'я' && Men[Number].Surname[i] >= 'а'))
		{
			continue;
		}
		else
		{
			printf("Неверный формат!\n");
			goto A;
		}
	}

B: printf("Введите имя > ");
	scanf("%s", Men[Number].Name);
	for (i = 0; i < strlen(Men[Number].Name); i++)
	{
		if ((Men[Number].Name[i] <= 'z' && Men[Number].Name[i] >= 'a') || (Men[Number].Name[i] <= 'Z' && Men[Number].Name[i] >= 'A') || (Men[Number].Name[i] <= 'Я' && Men[Number].Name[i] >= 'А') || (Men[Number].Name[i] <= 'я' && Men[Number].Name[i] >= 'а'))
		{
			continue;
		}
		else
		{
			printf("Неверный формат!\n");
			goto B;
		}
	}

C: printf("Введите отчество > ");
	scanf("%s", Men[Number].Otch);
	for (i = 0; i < strlen(Men[Number].Otch); i++)
	{
		if ((Men[Number].Otch[i] <= 'z' && Men[Number].Otch[i] >= 'a') || (Men[Number].Otch[i] <= 'Z' && Men[Number].Otch[i] >= 'A') || (Men[Number].Otch[i] <= 'Я' && Men[Number].Otch[i] >= 'А') || (Men[Number].Otch[i] <= 'я' && Men[Number].Otch[i] >= 'а'))
		{
			continue;
		}
		else
		{
			printf("Неверный формат!\n");
			goto C;
		}
	}

D: printf("Введите номер каюты > ");
	scanf("%d", &Men[Number].NumRoom);
	if (Men[Number].NumRoom < 0)
	{
		printf("Неверный формат!\n");
		goto D;
	}



E: printf("Введите тип каюты ('0'- люкс, '1','2','3'-1, 2 и 3 классы соответственно) > ");
	scanf("%d", &Men[Number].TypeRoom);
	if (Men[Number].TypeRoom > 3 || Men[Number].TypeRoom < 0)
	{
		printf("Неверный формат!\n");
		goto E;
	}

F: printf("Введите страну проживания > ");
	scanf("%20s", Men[Number].Country);
	for (i = 0; i < strlen(Men[Number].Country); i++)
	{
		if ((Men[Number].Country[i] <= 'z' && Men[Number].Country[i] >= 'a') || (Men[Number].Country[i] <= 'Z' && Men[Number].Country[i] >= 'A') || (Men[Number].Country[i] <= 'Я' && Men[Number].Country[i] >= 'А') || (Men[Number].Country[i] <= 'я' && Men[Number].Country[i] >= 'а'))
		{
			continue;
		}
		else
		{
			printf("Неверный формат!\n");
			goto F;
		}
	}

G: printf("Введите порт назначения > ");
	scanf("%20s", Men[Number].End);
	for (i = 0; i < strlen(Men[Number].End); i++)
	{
		if ((Men[Number].End[i] <= 'z' && Men[Number].End[i] >= 'a') || (Men[Number].End[i] <= 'Z' && Men[Number].End[i] >= 'A') || (Men[Number].End[i] <= 'Я' && Men[Number].End[i] >= 'А') || (Men[Number].End[i] <= 'я' && Men[Number].End[i] >= 'а'))
		{
			continue;
		}
		else
		{
			printf("Неверный формат!\n");
			goto G;
		}
	}
	Number++;
} /* End of 'Add' function */