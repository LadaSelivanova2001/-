#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <windows.h>
#include "Pass.h"

/* Функция для удаления элемента */
void Del(void)
{
	int i;
	Print();
	printf("Введите номер удаляемого элемента > ");
	scanf("%i", &i);
	if (i < 1 || i > Number)
	{
		fprintf(stderr, "Элемент с номером %i не существует\n", i);
		return;
	}
	for (i--; i < Number - 1; i++)
		Men[i] = Men[i + 1];
	Number--;
} /* End of 'Del' function */