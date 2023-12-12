/*Napisz funkcję która przyjuje wskaźnik na pierwszy i ostatni 
element tablicy liczb typu int. Funkcja powinna na podstawie
 wskaźników obliczyć rozmiar tablicy n i wypełnić ją liczbami od 1 do n.*/
#include<stdio.h>

void fillTabFun(int * TabIdxFirst, int * TabIdxLast, int * wskSize)
{
    int * sizeChecker= TabIdxFirst;

    while (sizeChecker != TabIdxLast)
    {
        sizeChecker += 1;
        (*wskSize) += 1;
    }

    for (int i = 0; i < *wskSize; i++)
    {
        TabIdxFirst[i] = i + 1;
    }
}
int main()
{
    int size = 1;
    int numTab[10];

    int * wskSize = &size;
    int * wskTabIdxFirst = &numTab[0];
    int * wskTabIdxLast = &numTab[9];

    fillTabFun(wskTabIdxFirst, wskTabIdxLast, wskSize);

    printf("rozmiar tablicy toblicy to %d\n", size);

    for (int i = 0; i < size; i++)
    {
        printf("Index %d, zawartosc %d\n", i, numTab[i]);
    }
}
