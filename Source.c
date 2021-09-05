#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <string.h> 
#include <locale.h> 
#include <windows.h> 
#include "Pass.h" 

/* Вывод меню и чтение номера выбранного пункта */
int Menu(void)
{
    int c = 0;
    while ((c < '0' || c > '9'))
    {
        printf("1 : Заполнение базы данных\n"
            "2 : Добавление записи в базу\n"
            "3 : Удаление заданной записи из базы\n"
            "4 : Поиск записи по заданному полю\n"
            "5 : Редактирование заданной записи в базе\n"
            "6 : Сортировка данных в базе по заданному полю\n"
            "7 : Вывод на экран содержимого базы в табличном виде\n"
            "8 : Сохранить базу в файл\n"
            "9 : Выгрузить базу из файла\n"
            "0 : Выйти из программы\n"
            "Ваш выбор >");

        c = _getch();
        printf("%c\n", c);
    }
    return c;
} /* End of 'Menu' function */

/* Основная функция */
void main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "rus");
    int Selection;
    int k = 1;
    Number = 0;
    do
    {
        switch (Selection = Menu())
        {
        case '1':
            Fill();
            break;
        case '2':
            Add();
            break;
        case '3':
            Del();
            break;
        case '4':
            Search();
            break;
        case '5':
            Edit();
            break;
        case '6':
            Sort();
            break;
        case '7':
            Print();
            break;
        case '8':
            Save();
            break;
        case '9':
            Load();
            break;
        case '0':
            k = 0;
            break;
        }
    } while (k == 1);
}
