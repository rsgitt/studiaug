//Napisz funkcję, która przyjmuje jako argumenty liczby d,m,r i zwróci liczbę dni pozostałych do końca roku.
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

int daysLeftInYear(int year, int month, int day)
{
    int daysLeft = 0;
    for (int i = month; i <= 12; i++)
    {
        daysLeft += daysInMonth(year, i);
    }
    daysLeft -= day;
    return daysLeft;
}

int main()
{
    int year, month, day;
    printf("Podaj rok, miesiac i dzien a ja ci zwroce ile dni zostalo do konca roku: \n");
    scanf("%d%d%d", &year, &month, &day);
    int daysLeft = daysLeftInYear(year, month, day);
    printf("Do konca roku zostalo %d dni", daysLeft);
}