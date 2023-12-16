//Napisz program który pobierze od użytkownika długości trzech odcinków i sprawdzi czy można z nich utworzyć trójkąt prostokątny.
//todo
#include<stdio.h>

int biggest_num(int a, int b, int c)
{
    printf("Podaj trzy liczby: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        return a, b, c;
    } else if (b >= a && b >= c) {
        return b, a, c;
    } else {
        return c, b, a;
    }
}
}

int check_triangle(int biggest_side, int side2, int side3);
{

}

int main()
{
    int side1, side2, side3;
    int 
    printf("Podaj jakiekolwiek 3 dlugosci bokow a ja sprawdze czy mozna z nich utworzyc trojkat prostokatny: \n");
    scanf("%d%d%d", side1, side2, side3);
    check_triangle(side1, side2, side3)

}