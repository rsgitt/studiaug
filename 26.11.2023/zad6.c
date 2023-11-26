/*Napisz funkcję rekurencyjną obliczającą sumę cyfr podanej liczby.*/
#include<stdio.h>

int sum_fun(int num, int sum)
{
    if (num > 0)
        return sum_fun(num/10, sum+(num%10));
    else
        return sum;
}
int func(int num)
{
    return sum_fun(num, 0);
}
int main()
{
    int num;
    printf("Podaj liczbe a ja policze ile wynosi suma jej cyfr: \n");
    scanf("%d", &num);
    int count_num = func(num);
    printf("%d\n", count_num);
}