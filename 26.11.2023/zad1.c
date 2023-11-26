#include<stdio.h>

long int factorial(long int number)
{   
    if (number > 1)
    {
        return number * factorial(number-1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    long int number;
    printf("Podaj dana liczbe a ja policze taka silnie: \n");
    scanf("%ld", &number);
    long int fact_number = factorial(number);
    printf("Silnia %ld! to %ld", number, fact_number);
}