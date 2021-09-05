#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <string.h> 
#include <locale.h> 
#include <windows.h> 
#include "Pass.h" 

/* Ôóíêöèÿ äëÿ äîáàâëåíèÿ ýëåìåíòà */
void Add()
{
    int i;
    if (Number == 19)
    {
        fprintf(stderr, "Íåâîçìîæíî äîáàâèòü åùå îäèí ýëåìåíò!\n");
        return;
    }

A: printf("Ââåäèòå ôàìèëèþ > ");
    scanf("%s", Men[Number].Surname);
    for (i = 0; i < strlen(Men[Number].Surname); i++)
    {
        if ((Men[Number].Surname[i] <= 'z' && Men[Number].Surname[i] >= 'a') || (Men[Number].Surname[i] <= 'Z' && Men[Number].Surname[i] >= 'A') || (Men[Number].Surname[i] <= 'ß' && Men[Number].Surname[i] >= 'À') || (Men[Number].Surname[i] <= 'ÿ' && Men[Number].Surname[i] >= 'à'))
        {
            continue;
        }
        else
        {
            printf("Íåâåðíûé ôîðìàò!\n");
            goto A;
        }
    }

B: printf("Ââåäèòå èìÿ > ");
    scanf("%s", Men[Number].Name);
    for (i = 0; i < strlen(Men[Number].Name); i++)
    {
        if ((Men[Number].Name[i] <= 'z' && Men[Number].Name[i] >= 'a') || (Men[Number].Name[i] <= 'Z' && Men[Number].Name[i] >= 'A') || (Men[Number].Name[i] <= 'ß' && Men[Number].Name[i] >= 'À') || (Men[Number].Name[i] <= 'ÿ' && Men[Number].Name[i] >= 'à'))
        {
            continue;
        }
        else
        {
            printf("Íåâåðíûé ôîðìàò!\n");
            goto B;
        }
    }

C: printf("Ââåäèòå îò÷åñòâî > ");
    scanf("%s", Men[Number].Otch);
    for (i = 0; i < strlen(Men[Number].Otch); i++)
    {
        if ((Men[Number].Otch[i] <= 'z' && Men[Number].Otch[i] >= 'a') || (Men[Number].Otch[i] <= 'Z' && Men[Number].Otch[i] >= 'A') || (Men[Number].Otch[i] <= 'ß' && Men[Number].Otch[i] >= 'À') || (Men[Number].Otch[i] <= 'ÿ' && Men[Number].Otch[i] >= 'à'))
        {
            continue;
        }
        else
        {
            printf("Íåâåðíûé ôîðìàò!\n");
            goto C;
        }
    }

D: printf("Ââåäèòå íîìåð êàþòû > ");
    scanf("%d", &Men[Number].NumRoom);
    if (Men[Number].NumRoom < 0)
    {
        printf("Íåâåðíûé ôîðìàò!\n");
        goto D;
    }



E:  printf("Ââåäèòå òèï êàþòû ('0'- ëþêñ, '1','2','3'-1, 2 è 3 êëàññû ñîîòâåòñòâåííî) > ");
    scanf("%d", &Men[Number].TypeRoom);
    if (Men[Number].TypeRoom > 3 || Men[Number].TypeRoom < 0)
    {
        printf("Íåâåðíûé ôîðìàò!\n");
        goto E;
    }

F: printf("Ââåäèòå ñòðàíó ïðîæèâàíèÿ > ");
    scanf("%20s", Men[Number].Country);
    for (i = 0; i < strlen(Men[Number].Country); i++)
    {
        if ((Men[Number].Country[i] <= 'z' && Men[Number].Country[i] >= 'a') || (Men[Number].Country[i] <= 'Z' && Men[Number].Country[i] >= 'A') || (Men[Number].Country[i] <= 'ß' && Men[Number].Country[i] >= 'À') || (Men[Number].Country[i] <= 'ÿ' && Men[Number].Country[i] >= 'à'))
        {
            continue;
        }
        else
        {
            printf("Íåâåðíûé ôîðìàò!\n");
            goto F;
        }
    }

G: printf("Ââåäèòå ïîðò íàçíà÷åíèÿ > ");
    scanf("%20s", Men[Number].End);
    for (i = 0; i < strlen(Men[Number].End); i++)
    {
        if ((Men[Number].End[i] <= 'z' && Men[Number].End[i] >= 'a') || (Men[Number].End[i] <= 'Z' && Men[Number].End[i] >= 'A') || (Men[Number].End[i] <= 'ß' && Men[Number].End[i] >= 'À') || (Men[Number].End[i] <= 'ÿ' && Men[Number].End[i] >= 'à'))
        {
            continue;
        }
        else
        {
            printf("Íåâåðíûé ôîðìàò!\n");
            goto G;
        }
    }
    Number++;
} /* End of 'Add' function */
