#include<stdio.h>

int main()
{
    int a, b;
    int kopia_a;
    printf("Podaj liczbe i potege do ktorej chcesz ja podniesc");
    scanf("%d%d", &a, &b);
    kopia_a = a;

    for (int i = 1; i < b; ++i)
    {
        a*=kopia_a;
        
    }
    printf("liczba %d do potegi %d to %d\n", kopia_a, b, a);
}