//algorytm sortowania przez selekcję.
//todo
#include<stdio.h>
#define SIZE 5

void printTab(int tabNum[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("index %d, zwartosc %d\n", i, tabNum[i]);
    }
}

int min(int tabNum[], int size, int start)
{
    int min = tabNum[start];
    int minIdx = start;

    for (int i = start; i < size; i++)
    {
        if (tabNum[i] < min)
        {
            min = tabNum[i];
            minIdx = i;
        }
        
    }
    return minIdx;
}

void changePlaces(int * tabNum1, int * tabNum2)
{
    int waiting = *tabNum1;
    *tabNum1 = *tabNum2;
    *tabNum2 = waiting;
}

int sortSelect(int numTab[], int size)
{
    int i = 0;
    int minTabIdx;
    while (i < size)
    {
        minTabIdx = min(numTab, size, i);
        changePlaces(&numTab[i], &numTab[minTabIdx]);
        printf("%d\n%d",numTab[i], numTab[minTabIdx]);
        i += 1;
    }
}

int main()
{
    int tabNum[SIZE] = {2,4,1,3,5};
    sortSelect(tabNum, SIZE);
    printTab(tabNum, SIZE);
}