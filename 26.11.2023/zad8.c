/*Napisz funkcję rekurencyjną sprawdzającą czy podane słowo jest palindromem.*/
#include<stdio.h>
#include<string.h>

int check_palindrom(char table[], int start, int end)
{
    if (start >= (end - 1))
    {
        return 1;
    }
    else
    {
        if (table[start] == table[end - 1])
        {
            return check_palindrom(table,start + 1, end - 1);
        }
        else
        {
            return 0;
        }
    }
}
int main()
{
    int size = 100;
    char table[size];
    printf("Podaj slowo a ja sparwdze czy jest palindronem: ");
    scanf("%s", table);
    int end = strlen(table);
    int palindrom_flag = check_palindrom(table, 0, end);
    
    if (palindrom_flag)
    {
        printf("Slowo %s jest palindromem\n", table);
    }
    else
    {
        printf("Slowo %s nie jest palindromem\n", table);
    }
}