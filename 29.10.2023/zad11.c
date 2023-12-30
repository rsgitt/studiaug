//Napisz program który pobierze od użytkownika długości trzech odcinków i sprawdzi czy można z nich utworzyć trójkąt prostokątny.
//todo
#include<stdio.h>

int positiveNums(int side1, int side2, int side3)
{
    if ((side1 > 0 )&& (side2 > 0) && (side3 > 0))
    {
        return 1;
    }
    return 0;
}

int power(int num)
{
    num *= num;
    return num;
}

int checkRightTriangle(int side1, int side2, int side3)
{

    if (positiveNums(side1, side2, side3))
    {
        int powerSide1 = power(side1);
        int powerSide2 = power(side2);
        int powerSide3 = power(side3);

        if ((powerSide1 + powerSide2) == powerSide3)
        {
            return side3;
        }

        if ((powerSide1 + powerSide3) == powerSide2)
        {
            return side2;
        }

        if ((powerSide2 + powerSide3) == powerSide1)
        {
            return side1;
        }


    }
    return 0;
}

int main()
{
    int side1, side2, side3;
    int hypotenuse;
    printf("Podaj jakiekolwiek 3 dlugosci bokow a ja sprawdze czy mozna z nich utworzyc trojkat prostokatny: \n");
    scanf("%d%d%d", &side1, &side2, &side3);
    hypotenuse = checkRightTriangle(side1, side2, side3);
    if (hypotenuse)
    {
        printf("Mozna stworzyc trojkat prostokatny z pdanych bokow, jego przeciwprostokatna to %d", hypotenuse);
    }
    else
    {
        printf("Nie mozna stworzyc z podanych bokow trojkata prostokatnego");
    }
}