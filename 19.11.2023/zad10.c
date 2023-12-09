//Napisz funkcję, która przyjmuje jako argument miesiąc i rok i zwróci liczbę dni danego miesiąca.
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
int main()
{
    int year, month;
    printf("Podaj rok i miesiac a ja ci zworce ile dany miesiac ma dni: \n");
    scanf("%d%d", &year, &month);
    int monthLen = daysInMonth(year, month);
    printf("Miesiac %d w roku %d ma %d dni", month, year, monthLen);
}