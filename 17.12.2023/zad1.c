//https://github.com/ZakrzewskiM30/SPJP2023-2024/blob/master/Lab08/Zadania.md
//przeszukiwanie liniowe
#include<stdio.h>
#define SIZE 5
void returnInfo(int flag)
{
    if (flag)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
}

int nPlusOneFun(int tabNum[], int size, int * pN, int idx)
{
    while (idx < size)
    {
        if (tabNum[idx] == *pN)
        {
            return 1;
        }
        idx += 1;
    }
    return 0;
}

int main()
{
    int tabNum[SIZE] = {1, 2, 3, 4, 5};
    int n;
    scanf("%d", &n);
    int *pN = &n;
    int idx = 0;
    int flag = nPlusOneFun(tabNum, SIZE, pN, idx);
    
    returnInfo(flag);
}