//Napisz funkcję, która przyjmuje jako argumenty d1,m1,r1,d2,m2,r2 reprezentujące dwie daty i zwróci 1 jeśli pierwsza data jest wcześniejsza, jeśli data 2 jest wcześniejsza funkcja powinna zwrócić 2.
//
#include<stdio.h>

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
    return 2;
}
int main()
{
    int year1, month1, day1;
    int year2, month2, day2;
    int earlerDate;
    printf("Podaj dwie daty a ja ci zwroce liczbe dni ktore je roznia \n");
    scanf("%d\n%d\n%d\n", &year1, &month1, &day1);
    scanf("%d\n%d\n%d", &year2, &month2, &day2);
    earlerDate = isEarlier(year1, month1, day1, year2, month2, day2);
    printf("data %d jest wczesniejsza", earlerDate);
}