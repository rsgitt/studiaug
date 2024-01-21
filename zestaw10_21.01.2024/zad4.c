/*Napisz program, który odczyta zawartość pliku liczby.txt 
(w każdej lini pliku powinna znajdować się jedna liczba).
Liczby parzyste powinny zostać przepisane do pliku parzyste.txt, 
nieparzyste do pliku nieparzyste.txt*/
//todo
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size = 256;
    char file[size];
    char vChar;

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
            while ((vChar = fgetc(fp)) != EOF)
            {
                int iChar = atoi(vChar);
                if ((int)vChar != 10)
                {   
                    if (iChar%2==1)
                    {
                        //zapisz w pliku nparzyste
                    }
                    else
                    {
                        //zapisz w pliku parzyste
                    }
                }
            }
            fclose(fp);
            printf("\n");
        }
}