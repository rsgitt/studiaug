/*Napisz program który pobierze od użytkownika liczbę i sprawdzi 
czy jest ona podzielna przez liczby z zakresu 2-6 jeśli tak program
powinien zwrócić pierwszą z tych liczb, jeśli podana liczba nie dzieli
się przez żadną z tych liczb program powinien zwrócić stosowny komunikat.*/
//ok

#include<stdio.h>

int division(int number)
{
    int divisor;
    for (divisor = 6; (divisor <= 6) && (divisor >= 2); divisor--)
    {
        if (number % divisor == 0)
        {
            return divisor;
        }
    }
    return 0;
    
}

int main()
{
    int number;
    int division_variable;

    printf("Podaj liczbe a ja sprawdze czy dzieli sie przez liczby z zakresu 2-6: \n");
    scanf("%d", &number);

    division_variable = division(number);
    if (division_variable)
    {
        printf("Liczba %d jest podzielna przez %d\n", number, division_variable);
    }
    else
    {
        printf(" Liczba %d nie jest podzielna przez zadna z liczb z zakresu 2-6", number);
    }
}