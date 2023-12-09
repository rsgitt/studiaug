//Napisz funkcję, która przyjmuje jako argumenty d1,m1,r1,d2,m2,r2 reprezentujące dwie daty i zwróci liczbę dni różniącą te daty.
//todo
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
    int year1, month1, day1;
    printf("Podaj rok, miesiac i dzien a ja ci zwroce ile dni zostalo do konca roku: \n");
    scanf("%d%d%d%d%d%d", &year1, &month1, &day1, &year2, &month2, &day2);
    int daysLeft1 = daysLeftInYear(year, month, day);
    printf("Do konca roku zostalo %d dni", daysLeft);
}