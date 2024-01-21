/*https://github.com/ZakrzewskiM30/SPJP2023-2024/blob/master/Lab10/Zadania.md*/
#include<stdio.h>

void widthFun(char vChar ,int width)
{
    for (int w = 0; w < width; w++)
    {
        printf("%c", vChar);
    }
    printf("\n");
}

int asciiNum(char num)
{
    int realNum = (int)num - 48;
    return realNum;
}

void rectangleFun(char vChar, int inside, int height, int width)
{
    if (inside)
    {
        for (int i = 0; i < height; i++)
        {
            widthFun(vChar, width);
        }
    }
    else
    {
        widthFun(vChar, width);
        for (int i = 0; i<height-2; i++)
        {
            printf("%c", vChar);
            for (int j = 0; j<width-2; j++)
            {
                printf(" ");
            }
            printf("%c\n", vChar);
        }
        widthFun(vChar, width);
        printf("\n");
    }
}

int main()
{
    int size = 256;
    char file[size];
    char rectangleInfo[4];
    char vChar;
    int i = 0;

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
            if ((int)vChar != 10)
            {   
                rectangleInfo[i] = vChar;
                i++;
            }
        }
        rectangleFun(rectangleInfo[0], asciiNum(rectangleInfo[1]), asciiNum(rectangleInfo[2]), asciiNum(rectangleInfo[3]));
        fclose(fp);
        printf("\n");
    }
}