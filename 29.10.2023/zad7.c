//Napisz program który pobierze od użytkownika trzy liczby (dzień, miesiąc, rok) i sprawdzi czy tworzą poprawną datę.
#include<stdio.h>

int main()
{
    int day, month, year;
    int max_year = 2023;
    printf("Podaj po kolei dzien, miesiac i rok a ja sprawdze czy podane liczby: ");
    scanf("%d%d%d", &day, &month, &year);

    if ((day >=1 && day <=31) && (month >=1 && month <= 12) && (year >= 1 && year <= max_year))
    {
        printf("Data %d.%d.%d jest poprawna", day, month, year);
    }
    else
    {
        printf("Data %d.%d.%d nie jest poprawna", day, month, year);
    }
}