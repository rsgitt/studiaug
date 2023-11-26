/*Napisz funkcję rekurencyjną która dla podanej liczby n wypisze wszystkie liczby z całkowite z przedziału [1, 2, … ,n].*/
#include<stdio.h>
int intiger(int num)
{
    if (num == 1)
    {
        printf("%d", num);
    }
    else
    {
        intiger(num-1);
        printf(", %d", num);
    }
}
int main()
{
    int number;
    printf("Podaj liczbe a ja utworze caly przedzial od 1 do tej liczby: \n");
    scanf("%d", &number);
    intiger(number);
    printf("\n");
}