//przeszukiwanie binarne
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
int binarySearch(int tabNum[], int size,int left, int right, int n)
{
    int middle = 0;

    while (left <= right)
    {
        middle = (left + right)/2;
        if (tabNum[middle] < n)
        {
            left = middle + 1;
        }
        else if (tabNum[middle] > n)
        {
            right = middle - 1;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int tabNum[SIZE] = {1, 2, 3, 4, 5};
    int left = 1;
    int right = 5;
    int n;
    scanf("%d", &n);

    int flag = binarySearch(tabNum, SIZE, left, right, n);
    returnInfo(flag);
}