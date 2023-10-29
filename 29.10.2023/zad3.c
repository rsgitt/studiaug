#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    if (a < b)
    {
        printf("Liczba %d jest wieksza od %d\n", b, a);
    }
    else
    {
        printf("Liczba %d jest wieksza od %d\n", a, b);
    }   

}