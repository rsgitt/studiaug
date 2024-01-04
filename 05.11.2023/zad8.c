//Napisz program który dla podanej pary liczb a,b zwróć b liczb pierwszych większych lub równych a.
#include<stdio.h>



int primeNumber(int num)
{
    for (int i=2; i<num; i++)
    {
        if (num%i != 0)
        {
            continue;
        }
        return 0;
    }
    return 1;
}

void printBprimeNumbers(int a, int b)
{
    int countPrimeNumber = 0;

    printf("Przedstawiam ci %d liczb pierwszych wiekszych lub rownych %d:\n", b, a);
    while(countPrimeNumber != b)
    {
        if (primeNumber(a))
        {
            printf("%d\n", a);
            countPrimeNumber += 1;
        }
        a += 1;
    }
}

int main()
{
    int num1 = 20;
    int num2 = 5;
    printBprimeNumbers(num1, num2);
}