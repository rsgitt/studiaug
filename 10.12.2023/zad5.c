/*Napisz funkcję która przyjmuje wskaźniki 
na trzy liczby a, b, c posortuje wartości 
tych liczb rosnąco.*/
#include<stdio.h>
void changePlaces(int * num1, int * num2)
{
    int waiting = *num1;
    *num1 = *num2;
    *num2 = waiting;
}
void sortHighToLow(int * num1, int * num2, int * num3)
{
    if ((*num1 > *num2) && (*num2 > *num3) && (*num1 > *num3)) //np 5, 4, 3
    {
        changePlaces(num1, num3);
    }
    if ((*num1 < *num2) && (*num2 > *num3) && (*num1 < *num3)) //np. 3, 5, 4
    {
        changePlaces(num2, num3);
    }
    if ((*num1 > *num2) && (*num2 < *num3) && (*num1 < *num3)) //np. 4, 3, 5
    {
        changePlaces(num1, num2);
    }
    if ((*num1 > *num2) && (*num2 < *num3) && (*num1 > *num3)) //np. 5, 3, 4
    {
        changePlaces(num1, num3);
        changePlaces(num1, num2);
    }
    if ((*num1 < *num2) && (*num2 > *num3) && (*num1 > *num3)) //np 4, 5, 3
    {
        changePlaces(num2, num3);
        changePlaces(num1, num2);
    }
}
int main()
{
    int num1 = 5;
    int num2 = 3;
    int num3 = 4;

    int * wsk1 = &num1;
    int * wsk2 = &num2;
    int * wsk3 = &num3;

    printf("1.%d\n2.%d\n3.%d\n\n", num1, num2, num3);

    sortHighToLow(wsk1, wsk2, wsk3);

    printf("1.%d\n2.%d\n3.%d\n", num1, num2, num3);
}
