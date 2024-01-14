/*Na podstawie poprzedniego zadania napisz 
strukturę trójkąt zawierającą trzy punkty. Dodaj funkcję 
sprawdzającą czy punkty w strukturze tworzą poprawny trójkąt.*/
#include<stdio.h>
#include<math.h>

struct point
{
    int x, y;
} point;

struct triangle
{
    struct point p1;
    struct point p2;
    struct point p3;
} triangle;

void segment(struct triangle t)
{
    t.p1.x = 5;
    printf("%d", t.p1.x);
}

int checkTriangle()
{

}

int main()
{
    struct triangle t;
    segment(t);
}