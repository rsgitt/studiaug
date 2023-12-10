/*Napisz funkcję która przyjmuje jako argument wskaźnik 
na tablicę nieujemnych liczb całkowitych i jej rozmiar, 
funkcja powinna zwrócić największy element tablicy i zamienić 
jego wartość w oryginalnej tablicy na 0.*/
#include<stdio.h>

int biggestChangeToZero(int * wsk, int size)
{
    int biggestNum = wsk[0];
    int * biggestNumAdress = &wsk[0];
    for (int i = 1; i <= size; i++)
    {
        if (biggestNum > wsk[i])
        {
            continue;
        }
        biggestNum = wsk[i];
        biggestNumAdress = &wsk[i];
    }
    int waiting = biggestNum;
    *biggestNumAdress = 0;
    return waiting;
    
}
int main()
{
    int nonnegativeTab[5] = {10, 2, 13, 1, 9};
    int * wsk = nonnegativeTab;
    int size = sizeof(nonnegativeTab) / sizeof(nonnegativeTab[0]);

    for (int i = 0; i < size; i++)
    {
        printf("tab[%d]= %d\n", i, wsk[i]);
    }

    int biggestNum = biggestChangeToZero(wsk, size);

    printf("\nNajwieksza wartosc z tablicy to %d\n\n", biggestNum);

    for (int i = 0; i < size; i++)
    {
        printf("tab[%d]= %d\n", i, wsk[i]);
    }
}