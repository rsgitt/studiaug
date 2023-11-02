#include<stdio.h>

int main()
{
    int side1, side2, side3;
    int flag;

    printf("Podaj mi 3 liczby a ja spawdze czy mozna stwozyc trojkat\n ktory ma boki o podanych dlugosciach: ");
    scanf(" %d %d %d", &side1, &side2, &side3);
    
    if ((side1+side2>side3) && (side1+side3>side2) && (side2+side3>side1))
    {
        printf("Mozna stworzyc trojkat o bokach\n %d, %d, %d", side1, side2, side3);
    }
    else
    {
        printf("Nie mozna stworzyc trojkat o bokach\n %d, %d, %d", side1, side2, side3);
    }
};


