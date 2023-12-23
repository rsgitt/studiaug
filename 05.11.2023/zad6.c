//Napisz program który dla podanej tablicy dwówymiarowej o wartościach 0 lub 1, wypisze na ekranie prostokąt o wymiarach zależnych od wymiarów tablicy. Na współrzędnych odpowiadającym wartości 1 umieść znak 'x'
#include<stdio.h>
#define FIRSTSIZE 5
#define SECONDSIZE 2

void startEndTable(int size)
{
    printf("|");
    for (int i=0; i<size; i++)
    {
        printf("-");
    }
    printf("|\n");
}

void printRectangleTable(int firstSize, int secondSize, int numTab[][secondSize])
{
    startEndTable(secondSize);
    for (int i=0; i<firstSize; i++)
    {
        printf("|");

        for (int j=0; j<secondSize; j++)
        {
            if (numTab[i][j] == 1)
            {
                printf("x");
            }
            else
            {
                printf(" ");
            }
        }

        printf("|\n");
    }
    startEndTable(secondSize);
}

int main()
{
    int doubleTable[FIRSTSIZE][SECONDSIZE] = {{0, 0}, {1, 0}, {1, 1}, {0, 1}, {1, 0}};
    printRectangleTable(FIRSTSIZE, SECONDSIZE, doubleTable);
}