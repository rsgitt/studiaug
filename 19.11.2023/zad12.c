//Napisz funkcję, która przyjmuje jako argumenty d1,m1,r1,d2,m2,r2 reprezentujące dwie daty i zwróci liczbę dni różniącą te daty.
//toPush
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

int isEarlier(int year1, int month1, int day1, int year2, int month2, int day2)
//zwraca 1 jezeli pierwsza data jest mniejsza, 2 jezeli druga
{
    if (year1 < year2)
    {
        return 1;
    }
    if (year1 == year2 && month1 < month2)
    {
        return 1;
    }
    if (year1 == year2 && month1 == month2 && day1 < day2)
    {
        return 1;
    }
    return 0;
}

int differenceBetweenDates(int year1, int month1, int day1, int year2, int month2, int day2)
{
    int daysLeft1 = daysLeftInYear(year1, month1, day1);
    int daysLeft2 = daysLeftInYear(year2, month2, day2);
    int daysInYear = 0;
    int differenceBetweenDays;

    if (isEarlier(year1, month1, day1, year2, month2, day2) == 1)
    {
        differenceBetweenDays = daysLeftInYear(year1, month1, day1) - daysLeftInYear(year2, month2, day2);
    }
    else
    {
        differenceBetweenDays = daysLeftInYear(year2, month2, day2) - daysLeftInYear(year1, month1, day1);
    }

    if (year1 == year2)
    {
        return differenceBetweenDays;
    }

    if (year1 > year2)
    {
        for (int i = year2; i < year1; i++)
        {
            if(leapYear(year1))
            {
                daysInYear += 366;
            }
            else
            {
                daysInYear += 365;
            }
        }
        return (daysInYear + differenceBetweenDays);
    }
    else
    {
        for (int i = year1; i < year2; i++)
        {
            if(leapYear(year2))
            {
                daysInYear += 366;
            }
            else
            {
                daysInYear += 365;
            }
        }
        return (daysInYear + differenceBetweenDays);
    }
}

int main()
{
    int year1, month1, day1;
    int year2, month2, day2;
    int difference;
    printf("Podaj dwie daty a ja ci zwroce liczbe dni ktore je roznia \n");
    scanf("%d\n%d\n%d\n%d\n%d\n%d", &year1, &month1, &day1, &year2, &month2, &day2);
    
    difference = differenceBetweenDates(year1, month1, day1, year2, month2, day2);
    printf("lczba dni ktore rozna podane daty to %d\n", difference);
}