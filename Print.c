#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <windows.h>
#include "Pass.h"

/* Функция для вывода всех элементов */
void Print(void)
{
	int i;
	printf("\n\n%2s.|%20s|%20s|%20s|%20s|%70s|%20s|%20s|\n", "N", "Фамилия", "Имя", "Отчество", "Номер каюты", "Тип каюты ('0'- люкс, '1','2','3'-1, 2 и 3 классы соответственно)", "Страна проживания", "Порт назначения");
	for (i = 0; i < Number; i++)
		printf("%2i.|%20s|%20s|%20s|%20d|%70d|%20s|%20s|\n", i + 1, Men[i].Surname,
			Men[i].Name, Men[i].Otch, Men[i].NumRoom, Men[i].TypeRoom, Men[i].Country, Men[i].End);
} /* End of 'Print' function */