/*Napisz program, który pobierze od użytkownika nazwę pliku 
i wypisze jego treść na ekranie.*/

#include<stdio.h>
int main()
{
    int size = 256;
    char file[size];
    char bufor[size];

    printf("Podaj nazwe pliku wraz z rozszerzeniem\n");
    scanf("%s", file);
    printf("\n");
    
    FILE *fp = fopen(file, "r");

    if (fp == NULL)
    {
        printf("Nie ma takiego pliku w katalogu\n");
    }
    else
    {
        while (fgets(bufor, size, fp))
        {
            printf("%s", bufor);
        }
        fclose(fp);
        printf("\n");
    }
}