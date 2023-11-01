#include<stdio.h>

int main()
{
    int a, b, c;
    scanf("%d\n%d\n%d", &a, &b, &c);
    
    if ((a>=b) && (a>=c))
    {
        printf("Liczba %d jest najwieksza\n", a);
    }
    else if ((b>=a) && (b>=c))
    {
        printf("Liczba %d jest najwieksza\n", b);
    }
    else
    {
        printf("Liczba %d jest najwieksza\n", c);
    }
    return 0;
}
