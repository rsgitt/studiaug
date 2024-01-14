//Za pomocą struct napisz strukturę punkt która pozwoli zapisać współrzędne punktu na płaszczyźnie.
#include<stdio.h>

struct point
{
    float x, y;
};


int main()
{
    struct point p1;
    struct point p2;

    p1.x = 4.5;
    p1.y = 6;

    scanf("%f", &p2.x);
    scanf("%f", &p2.y);

    printf("\n");
    printf("%f\n", p1.x);
    printf("%f\n", p1.y);
    printf("%f\n", p2.x);
    printf("%f\n", p2.y);
}