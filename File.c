#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h> 

#include <string.h> 

#include <locale.h> 

#include <windows.h> 

#include "Pass.h" 

void Save(void)

{

    FILE* F;

    int i;



    if ((F = fopen("task0.txt", "w")) == NULL)

    {

        fprintf(stderr, "Невозможно открыть для записи файл 'task.txt'\n");

        return;

    }



    fprintf(F, "%i ", Number);

    for (i = 0; i < Number; i++)

        fprintf(F, "%s %s %s %d %d %s %s ", Men[i].Surname, Men[i].Name, Men[i].Otch, Men[i].NumRoom, Men[i].TypeRoom, Men[i].Country, Men[i].End);



    fclose(F);

} /* End of 'Save' function */



/* Функция для чтения массива из файла */

void Load(void)

{

    FILE* F;

    int i;



    if ((F = fopen("task0.txt", "r")) == NULL)

    {

        fprintf(stderr, "Невозможно открыть для чтения файл 'task.txt'\n");

        return;

    }



    fscanf(F, "%i", &Number);

    for (i = 0; i < Number; i++)

        fscanf(F, "%s %s %s %d %d %s %s", Men[i].Surname, Men[i].Name, Men[i].Otch, &Men[i].NumRoom, &Men[i].TypeRoom, Men[i].Country, Men[i].End);



    fclose(F);

    Print();

} /* End of 'Load' function */