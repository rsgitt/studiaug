//sortowanie przez wstawianie
#include<stdio.h>
#define SIZE 5

void printTab(int tabNum[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("index %d, zwartosc %d\n", i, tabNum[i]);
    }
}

int sort(int tab[], int size)
{
    int i = 0;
    int element;
    int k;

    while (i < size)
    {
        element = tab[i];
        k = i - 1;
        while ((k >= 0) && (tab[k] > element)) //0 - pierwszy elem. tablicy.
        {
            tab[k+1] = tab[k];
            k = k - 1;
        }
        tab[k+1] = element;
        i += 1;
    }
}

int main()
{
    int tab[SIZE] = {3,1,2,5,4};
    sort(tab, SIZE);
    printTab(tab, SIZE);
}