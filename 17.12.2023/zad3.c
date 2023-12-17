//przeszukiwanie babelkowe
#include<stdio.h>
#define SIZE 5

void printTab(int tabNum[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("index %d, zwartosc %d\n", i, tabNum[i]);
    }
}

void changePlaces(int * tabNum1, int * tabNum2)
{
    printf("%d\n", *tabNum1);
    printf("%d\n", *tabNum2);
    int waiting = *tabNum1;
    *tabNum1 = *tabNum2;
    *tabNum2 = waiting;
    printf("%d\n", *tabNum1);
    printf("%d\n", *tabNum2);
}

int bubbleSearch(int tabNum[], int size)
{
    int i = size - 1;
    int j;
    
    while (i != 0)
    {
        j = 0;
        while (j < i)
        {
            if (tabNum[j+1] < tabNum[j])
            {
                changePlaces(&tabNum[j+1], &tabNum[j]);
            }
            j += 1;
        }
        i -= 1;
    }
}

int main()
{
    int tabNum[SIZE] = {1, 3, 5, 4, 2};
    int flag = bubbleSearch(tabNum, SIZE);

    printTab(tabNum, SIZE);
}