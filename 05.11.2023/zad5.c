#include<stdio.h>

int main()
{
    int size;
    printf("Podaj wielkosc tablicy jaka mam dla ciebie stworzyc: ");
    scanf("%d", &size);
    int tab_nums[size];

    for (int i = 0; i < size; i++)
    {
        printf("Podaj liczbe: ");
        scanf("%d", &tab_nums[i]);
    }

    printf("\nTwoja tablica wyglada tak: \n");
    for (int i = 0; i < size; i++)
    {
        printf("Dla indeksu %d - %d\n", i, tab_nums[i]);
    }
}