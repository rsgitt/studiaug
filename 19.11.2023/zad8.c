//Napisz funkcję, która przyjmuje jako argumenty liczby d,m,r i sprawdzi, czy tworzą poprawną datę (d-dzień, m-miesiąc, r-rok).
#include<stdio.h>

int leapYear(int year)
{
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    {
        return 1;
    }
    return 0;
}
int daysInMonth(int year, int month)
{
    if ((month < 8 && month % 2 != 0) || (month >= 8 && month % 2 == 0))
    {
        return 31;
    }
    if (month == 2)
    {
        if (leapYear(year))
        {
            return 29;
        }
        return 28;
    }
    return 30;
}

int yearValid(int year, int month, int day)
{
    if (month < 1 || month > 12)
    {
        return 0;
    }
    if (day < 1 || day > daysInMonth(year, month))
    {
        return 0;
    }
    return 1;
}

int main()
{
    int year, month, day;
    printf("Podaj rok, miesiac i dzien a ja sprawdze czy podane dane tworza prawdziwa date: \n");
    scanf("%d%d%d", &year, &month, &day);
    if (yearValid(year, month, day))
    {
        printf("data %d.%d.%d jest prawdziwa", day, month, year);
    }
    else
    {
        printf("data %d.%d.%d nie jest prawdziwa", day, month, year);
    }
}