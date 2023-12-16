//Napisz program który dla zadanej tablicy liczb stworzy i zwróci tablicę kwadratów tych liczb.
#include <stdio.h>

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

    printf("Twoja tablica wyglada tak: \n");
    for (int i = 0; i < size; i++)
    {
        printf("Dla indeksu %d - %d\n", i, tab_nums[i]);
    }
}

/*void sqrt_table(int tablef[], int sizef, int idx)
{
    if (sizef > idx)
    {
        int power = tablef[idx] * tablef[idx];
        printf("liczba %d,", tablef[idx]);
        printf(" potega to %d", power);
        idx += 1;
        return sqrt_table(tablef, sizef, idx);
    }
}
int main()
{
    int num;
    int size = 5;
    int table1[size];
    char flag = 't';
    int i = 0;

    printf("Podaj liczby do tablicy a ja zworce to jako kwadrat: \n");

    for (i=0; i<size; i++)
    {
        scanf("%d", &num);
        table1[i] = num;
    }
    sqrt_table(table1, size, 0);
}*/

