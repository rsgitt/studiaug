//Napisz program który dla zadanej tablicy liczb stworzy i zwróci tablicę kwadratów tych liczb.

//todo
#include<stdio.h>

int table_function(int num_table)
{
    int table[num_table];
    for (int i=0; i<num_table; i++)
    {
        int num;
        printf("Podaj wartosc do tabeli: \n")
        scanf("%d", &num);
        table[i] = num
    }
}
int sqrt_table(int table)
{

}

int main()
{
    int num;
    int table;
    printf("Podaj liczbe wielkosc tablicy ktora mam stworzyc;");
    scanf("%d", &num);
    table = table_function(num);
    table_2 = sqrt_table(table);
}