#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h> 

#include <string.h> 

#include <locale.h> 

#include <windows.h> 

#include "Pass.h" 

/* Функция для упорядочивания массива */

void Sort()

{

    int i, j, k;

    ITEM Temp;

    printf("Выберите поле, по которому будет произведена сортировка\n1-Фамилия\n2-Имя\n3-Отчество\n4-Номер каюты\n5-Тип каюты\n6-Страна проживания\n7-Порт назначения\n> ");

    scanf("%d", &k);

    do

    {

        switch (k)

        {

        case 1:

            for (j = Number - 1; j > 0; j--)

            {

                for (i = 0; i < j; i++)

                {

                    if (strcmp(Men[i].Surname, Men[i + 1].Surname) > 0)

                    {

                        Temp = Men[i];

                        Men[i] = Men[i + 1];

                        Men[i + 1] = Temp;

                    }

                }

            }

            break;

        case 2:

            for (j = Number - 1; j > 0; j--)

            {

                for (i = 0; i < j; i++)

                {

                    if (strcmp(Men[i].Name, Men[i + 1].Name) > 0)

                    {

                        Temp = Men[i];

                        Men[i] = Men[i + 1];

                        Men[i + 1] = Temp;

                    }

                }

            }

            break;

        case 3:

            for (j = Number - 1; j > 0; j--)

            {

                for (i = 0; i < j; i++)

                {

                    if (strcmp(Men[i].Otch, Men[i + 1].Otch) > 0)

                    {

                        Temp = Men[i];

                        Men[i] = Men[i + 1];

                        Men[i + 1] = Temp;

                    }

                }

            }

            break;

        case 4:

            for (j = Number - 1; j > 0; j--)

            {

                for (i = 0; i < j; i++)

                {

                    if (Men[i].NumRoom > Men[i + 1].NumRoom)

                    {

                        Temp = Men[i];

                        Men[i] = Men[i + 1];

                        Men[i + 1] = Temp;

                    }

                }

            }

            break;

        case 5:

            for (j = Number - 1; j > 0; j--)

            {

                for (i = 0; i < j; i++)

                {

                    if (Men[i].TypeRoom > Men[i + 1].TypeRoom)

                    {

                        Temp = Men[i];

                        Men[i] = Men[i + 1];

                        Men[i + 1] = Temp;

                    }

                }

            }

            break;

        case 6:

            for (j = Number - 1; j > 0; j--)

            {

                for (i = 0; i < j; i++)

                {

                    if (strcmp(Men[i].Country, Men[i + 1].Country) > 0)

                    {

                        Temp = Men[i];

                        Men[i] = Men[i + 1];

                        Men[i + 1] = Temp;

                    }

                }

            }

            break;

        case 7:

            for (j = Number - 1; j > 0; j--)

            {

                for (i = 0; i < j; i++)

                {

                    if (strcmp(Men[i].End, Men[i + 1].End) > 0)

                    {

                        Temp = Men[i];

                        Men[i] = Men[i + 1];

                        Men[i + 1] = Temp;

                    }

                }

            }

            break;

        default:

            printf("Попробуйте снова!\n");

            break;

        }

    } while (k > 7 || k <= 0);



} /* End of 'Sort' function */

