/*Napisz program, który sprawdzi czy w katalogu domowym 
znajduje się plik plik.txt*/

#include<stdio.h>
int main()
{
    char file[50];
    printf("Podaj nazwe pliku wraz z rozszerzeniem\n");
    scanf("%s", file);

    FILE *fp = fopen(file, "r");

    if (fp == NULL)
        printf("Nie ma takiego pliku w katalogu\n");
    else
        printf("ok\n");
}