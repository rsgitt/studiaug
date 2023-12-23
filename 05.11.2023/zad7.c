//Napisz program który dla podanej liczby n sprawdź czy n jest liczbą pierwszą.
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

int main()
{
    int userNumber;
    printf("Podaj liczbe a ja sprawdze czy jest liczba pierwsza\n");
    scanf("%d", &userNumber);
    if (userNumber > 0)
    {
        if (primeNumber(userNumber))
        {
            printf("Liczba %d jest liczba pierwsza\n", userNumber);
        }
        else
        {
            printf("Liczba %d nie jest liczba pierwsza\n", userNumber);
        }
    }
    else
    {
        printf("Liczba %d jest ujemna, dlatego nie jest liczba pierwsza\n", userNumber);
    }
}