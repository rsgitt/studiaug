/*Napisz program, który pobierze od użytkownika nazwę pliku i zamieni
 wszystkie małe litery z pliku na wielkie. Pozostałe znaki powinny 
 pozostać bez zmian.*/

#include<stdio.h>
int main()
{
    int size = 256;
    char file[size];
    char vChar;

    printf("Podaj nazwe pliku wraz z rozszerzeniem\n");
    scanf("%s", file);
    printf("\n");
    
    FILE *fp = fopen(file, "r+");

    if (fp == NULL)
    {
        printf("Nie ma takiego pliku w katalogu\n");
    }
    else
    {
        while ((vChar = fgetc(fp)) != EOF)
        {
            if ((int)vChar>96 && (int)vChar<123)
            {
                fseek(fp, -1, SEEK_CUR);
                fputc((char)((int)vChar - 32), fp);
                fseek(fp, 0, SEEK_CUR);
            }
        }
        fclose(fp);
        printf("\n");
    }
}