/*Napisz funkcję rekurencyjną obliczający n-ty wyraz ciągu Fibonacciego.*/
#include<stdio.h>
int fib_fun(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1 || num == 2)
    {
        return 1;
    }
    else
    {
        return fib_fun(num-2)+fib_fun(num-1);
    }

}

int main()
{
    int num;
    printf("Podaj jakas liczbe a ja oblicze ile wynosi liczba o tym indeksie w ciagu fibonacciego: ");
    scanf("%d", &num);
    int fib_num = fib_fun(num);
    printf("%d\n", fib_num);
}