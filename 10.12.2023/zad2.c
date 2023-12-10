/*Napisz program który zadeklaruje tablicę 10 elementową 
i wczyta jej elementy od użytkownika a następnie wypisze 
je na ekran. Do elementów tablicy odwołuj się za pomocą wskaźników*/
#include<stdio.h>

int main()
{
    int size = 10;
    int tabNum[size];
    int * wsk = tabNum;

    printf("Podaj %d elementow ktore mam przypisac do tablicy", size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &wsk[i]);
    }

    for (int i = 0; i < size; i++)
    {
        printf("wsk = %p zawartosc = %d\n", &wsk[i], wsk[i]);
    }
}