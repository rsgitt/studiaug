//https://github.com/ZakrzewskiM30/SPJP2023-2024/blob/master/Lab07/Zadania.md
#include<stdio.h>
int n = 0; //zmienna przechowujaca liczbe znakow w tablicy

void showTabFun(int numTab[], int size)
{
    if (n != 0)
    {
        for (int i = 0; i < size; i++)
        {
            printf("Index %d, zawartosc %d\n", numTab[i], i);
        }
        return;
    }
    printf("Tablica jest pusta");
}
int main()
{
    char numTab[100];
    int userChoice; //zmienna pozwalajaca wybrac uzytkownikowi operacje na tablicy (switch/case)
    int flag = 1;
    int * wskNumTab = &numTab;

    while (flag)
    {
        printf("l\n");
        scanf("%d", &userChoice);

        switch (userChoice)
        {
        case 0: //wybor '0' oznacza zakonczenie progamu
            flag = 0;
            break;

        case 1:
            showTabFun(numTab, n);
            break;
        
        default:
            printf("Niezrozumiala instrukcja, sprawdz czy wybrales prawdziwa opcje\n\n");
        }
    }
}