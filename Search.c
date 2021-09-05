#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <string.h> 
#include <locale.h> 
#include <windows.h> 
#include "Pass.h" 

//Ïîèñê  
void Search()
{
    int k, g = 1, l;
    char str[20];
    printf("Âûáåðèòå ïîëå, ïî êîòîðîìó áóäåò ïðîèçâåäåí ïîèñê\n1-Ôàìèëèÿ\n2-Èìÿ\n3-Îò÷åñòâî\n4-Íîìåð êàþòû\n5-Òèï êàþòû\n6-Ñòðàíà ïðîæèâàíèÿ\n7-Ïîðò íàçíà÷åíèÿ\n> ");
    scanf("%d", &k);
    do
    {
        switch (k)
        {
        case 1:
            printf("Ââåäèòå Ôàìèëèþ, ïî êîòîðîé áóäåò ïðîèçâåä¸í ïîèñê > ");
            scanf("%s", str);
            printf("Íàéäåííûå ïàññàæèðû:\n");
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
            printf("Ââåäèòå Èìÿ, ïî êîòîðîìó áóäåò ïðîèçâåä¸í ïîèñê > ");
            scanf("%s", str);
            printf("Íàéäåííûå ïàññàæèðû:\n");
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
            printf("Ââåäèòå Îò÷åñòâî, ïî êîòîðîìó áóäåò ïðîèçâåä¸í ïîèñê > ");
            scanf("%s", str);
            printf("Íàéäåííûå ïàññàæèðû:\n");
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
            printf("Ââåäèòå Íîìåð êàþòû, ïî êîòîðîìó áóäåò ïðîèçâåä¸í ïîèñê > ");
            scanf("%d", &l);
            printf("Íàéäåííûå ïàññàæèðû:\n");
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
            printf("Ââåäèòå Òèï êàþòû, ïî êîòîðîìó áóäåò ïðîèçâåä¸í ïîèñê > ");
            scanf("%d", &l);
            printf("Íàéäåííûå ïàññàæèðû:\n");
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
            printf("Ââåäèòå Ñòðàíó ïðîæèâàíèÿ, ïî êîòîðîé áóäåò ïðîèçâåä¸í ïîèñê > ");
            scanf("%s", str);
            printf("Íàéäåííûå ïàññàæèðû:\n");
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
            printf("Ââåäèòå Ïîðò íàçíà÷åíèÿ, ïî êîòîðîìó áóäåò ïðîèçâåä¸í ïîèñê > ");
            scanf("%s", str);
            printf("Íàéäåííûå ïàññàæèðû:\n");
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
            printf("Ïîïðîáóéòå ñíîâà!\n");
            break;
        }
    } while (k > 7 || k < 1);
}
