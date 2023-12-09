//Napisz funkcję, która przyjmuje jako argument liczbę r (rok) i sprawdzi czy jest to rok przestępny.
#include<stdio.h>


int leapYear(int year)
{
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    {
        return 1;
    }
    return 0;
}
int main()
{
    int year;
    printf("Podaj rok, a ja sprawdze czy rok jest przestepny: \n");
    scanf("%d", &year);
    int leapYearReturn = leapYear(year);
    if (leapYearReturn)
    {
        printf("Rok %d jest przestepny", year);
    }
    else
    {
        printf("Rok %d nie jest przestepny", year);
    }
}