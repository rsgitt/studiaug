//Napisz program który dla zadanej tablicy liczb stworzy i zwróci tablicę kwadratów tych liczb.

//todo
#include<stdio.h>

void sqrt_table(int tablef[], int sizef)
{
    int table_return[sizef];
    for(int i = 0; i <= sizef; i++)
    {
        table_return[i] = (tablef[i]) * (tablef[i]);
    }
    printf("Twoja tabela do kwadratu to %d", table_return);
}

int main()
{
    int num;
    int size = 5;
    long int table1[size];
    char flag = 't';
    int i = 0;

    printf("Podaj liczby do tablicy a ja zworce to jako kwadrat: \n");

    for (i=0; i<size; i++)
    {
        scanf("%d", &num);
        table1[i] = num;
    }
    sqrt_table(table1[], size);
    //printf("Tabela %d do kwadratu %d", table1, table_sqrt);

}