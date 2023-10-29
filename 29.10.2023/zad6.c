#include<stdio.h>

int main()
{
    int year;
    printf("Podaj rok a ja sprawdze czy jest przestepny: ");
    scanf("%d", &year);

    if ((year%4) == 0)
    {
        printf("Rok %d jest rokiem przestepnym\n", year);
    }
    else
    {
        printf("Rok %d nie jest rokiem przestepnym\n", year);
    }
}