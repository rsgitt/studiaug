//Napisz funkcję, która przyjmuje jako argument tablicę znaków i wypisze na ekran prostokątną ramkę wypełnioną znakami z tej tablicy.
#include<stdio.h>
void addElementsTable(int * numTab, int size)
{
    for (int i=0; i<size; i++)
    {
        printf("Podaj element do tablicy\n");
        scanf("%d", &numTab[i]);
    }
    printf("\n");
}

void startEndTable(int size)
{
    printf("|");
    for (int i=0; i<size; i++)
    {
        printf("---");
    }
    printf("|\n");
}

void printRectangleTable(int * numTab, int size)
{
    startEndTable(size);
    printf("|");

    for (int i=0; i<size; i++)
    {
        printf(" %d ", numTab[i]);
    }

    printf("|\n");
    startEndTable(size);
}

int main()
{
    int size;
    printf("Podaj rozmiar tablicy\n");
    scanf("%d", &size);
    int numTab[size];

    addElementsTable(numTab, size);
    printRectangleTable(numTab, size);
}