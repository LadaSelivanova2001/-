#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <windows.h>
#include "Pass.h"

//Поиск
void Search()
{
	int k, g = 1, l;
	char str[20];
	printf("Выберите поле, по которому будет произведен поиск\n1-Фамилия\n2-Имя\n3-Отчество\n4-Номер каюты\n5-Тип каюты\n6-Страна проживания\n7-Порт назначения\n> ");
	scanf("%d", &k);
	do
	{
		switch (k)
		{
		case 1:
			printf("Введите Фамилию, по которой будет произведён поиск > ");
			scanf("%s", str);
			printf("Найденные пассажиры:\n");
			for (int i = 0; i <= Number; i++)
			{
				if (strcmp(Men[i].Surname, str) == 0)
				{
					printf("%2i.|%20s|%20s|%20s|%20d|%20d|%20s|%20s|\n", g, Men[i].Surname, Men[i].Name, Men[i].Otch, Men[i].NumRoom, Men[i].TypeRoom, Men[i].Country, Men[i].End);
					g++;
				}
			}
			g = 1;
			break;

		case 2:
			printf("Введите Имя, по которому будет произведён поиск > ");
			scanf("%s", str);
			printf("Найденные пассажиры:\n");
			for (int i = 0; i <= Number; i++)
			{
				if (strcmp(Men[i].Name, str) == 0)
				{
					printf("%2i.|%20s|%20s|%20s|%20d|%20d|%20s|%20s|\n", g, Men[i].Surname, Men[i].Name, Men[i].Otch, Men[i].NumRoom, Men[i].TypeRoom, Men[i].Country, Men[i].End);
					g++;
				}
			}
			g = 1;
			break;

		case 3:
			printf("Введите Отчество, по которому будет произведён поиск > ");
			scanf("%s", str);
			printf("Найденные пассажиры:\n");
			for (int i = 0; i <= Number; i++)
			{
				if (strcmp(Men[i].Otch, str) == 0)
				{
					printf("%2i.|%20s|%20s|%20s|%20d|%20d|%20s|%20s|\n", g, Men[i].Surname, Men[i].Name, Men[i].Otch, Men[i].NumRoom, Men[i].TypeRoom, Men[i].Country, Men[i].End);
					g++;
				}
			}
			g = 1;
			break;

		case 4:
			printf("Введите Номер каюты, по которому будет произведён поиск > ");
			scanf("%d", &l);
			printf("Найденные пассажиры:\n");
			for (int i = 0; i < Number; i++)
			{
				if (Men[i].NumRoom == l)
				{
					printf("%2i.|%20s|%20s|%20s|%20d|%20d|%20s|%20s|\n", g, Men[i].Surname, Men[i].Name, Men[i].Otch, Men[i].NumRoom, Men[i].TypeRoom, Men[i].Country, Men[i].End);
					g++;
				}
			}
			g = 1;
			break;

		case 5:
			printf("Введите Тип каюты, по которому будет произведён поиск > ");
			scanf("%d", &l);
			printf("Найденные пассажиры:\n");
			for (int i = 0; i < Number; i++)
			{
				if (Men[i].TypeRoom == l)
				{
					printf("%2i.|%20s|%20s|%20s|%20d|%20d|%20s|%20s|\n", g, Men[i].Surname, Men[i].Name, Men[i].Otch, Men[i].NumRoom, Men[i].TypeRoom, Men[i].Country, Men[i].End);
					g++;
				}
			}
			g = 1;
			break;

		case 6:
			printf("Введите Страну проживания, по которой будет произведён поиск > ");
			scanf("%s", str);
			printf("Найденные пассажиры:\n");
			for (int i = 0; i <= Number; i++)
			{
				if (strcmp(Men[i].Country, str) == 0)
				{
					printf("%2i.|%20s|%20s|%20s|%20d|%20d|%20s|%20s|\n", g, Men[i].Surname, Men[i].Name, Men[i].Otch, Men[i].NumRoom, Men[i].TypeRoom, Men[i].Country, Men[i].End);
					g++;
				}
			}
			g = 1;
			break;

		case 7:
			printf("Введите Порт назначения, по которому будет произведён поиск > ");
			scanf("%s", str);
			printf("Найденные пассажиры:\n");
			for (int i = 0; i <= Number; i++)
			{
				if (strcmp(Men[i].End, str) == 0)
				{
					printf("%2i.|%20s|%20s|%20s|%20d|%20d|%20s|%20s|\n", g, Men[i].Surname, Men[i].Name, Men[i].Otch, Men[i].NumRoom, Men[i].TypeRoom, Men[i].Country, Men[i].End);
					g++;
				}
			}
			g = 1;
			break;

		default:
			printf("Попробуйте снова!\n");
			break;
		}
	} while (k > 7 || k < 1);
}