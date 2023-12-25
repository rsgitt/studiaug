//Napisz program który pobierze od użytkownika dwie pary liczb reprezentujące przeciwległe wierzchołki prostokąta i na ich podstawie wyznaczy pole i obwód tego prostokąta.
#include<stdio.h>

int countLenght(int num1, int num2)
{
    int sum;
    sum = num1 - num2;

    if (sum < 0)
    {
        sum = -sum;
    }

    return sum;
}

int countField(int x1, int y1, int x2, int y2)
{
    int xLenght = countLenght(x1, x2);
    int yLenght = countLenght(y1, y2);

    return (xLenght * yLenght);
}

int countPerimeter(int x1, int y1, int x2, int y2)
{
    int xLenght = countLenght(x1, x2);
    int yLenght = countLenght(y1, y2);
    int perimeter = (2 * xLenght) + (2 * yLenght);

    return (perimeter);
}

int main()
{
    int x1,y1;
    int x2,y2;
    printf("Podaj przeciwlegle wierzcholki postokata a ja oblicze\n (wprowadz dane wedle schematu (x,y))\n");
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    printf("Pole prostokata %d\n", countField(x1, y1, x2, y2));
    printf("Obwod prostokata %d\n", countPerimeter(x1, y1, x2, y2));
}