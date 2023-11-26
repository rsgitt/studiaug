/*Napisz funkcję rekurencyjną implementującą algorytm Euklidesa obliczający NWD.*/
#include <stdio.h>
int modulo = 0;

int nwd_function(int a, int b)
{
    if (b != 0)
    {
        int modulo = a % b;
        return nwd_function(b, modulo);
    }
    else
    {
        return a;
    }
}
int main()
{
    int num1, num2;
    printf("Podaj dwie liczby a ja oblicze nwd: \n");
    scanf("%d%d", &num1, &num2);
    int nwd = nwd_function(num1, num2);
    printf("Nwd liczby %d i %d to %d\n", num1, num2, nwd);
}