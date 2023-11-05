//Napisz program który wczyta od użytkownika parę liczb a,b i zwróci pierwszą liczbę c, taką że a do potęgi c jest większe od b.

#include<stdio.h>

int function(int num1, int num2)
{
    int c = 1;
    int kopia_num1 = num1;
    while (num1 < num2)
    {
        num1 *= kopia_num1;
        c++;
    }
    return c;
}

int main()
{
    int a, b;
    int c;
    printf("Podaj 2 liczby a ja powiem ci do ktorej potegi trzeba podniesc mniejsza liczbe aby byla wieksza od drugiej: \n");
    scanf("%d%d", &a, &b);
    if (a < b)
    {
        c = function(a, b);
        printf("Liczba %d dopiero po podniesieniu do potegi %d staje sie wieksza od %d\n", a, c, b);
    }
    else if (a > b)
    {
        c = function(b, a);
        printf("Liczba %d dopiero po podniesieniu do potegi %d staje sie wieksza od %d\n", b ,c ,a);
    }
    else
    {
        printf("Podane liczby sa takie same\n");
    }
}