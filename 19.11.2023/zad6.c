//Na podstawie zadania 5 napisz funkcję, która zwróci b3.
#include<stdio.h>
int a3_fun(int a1, int b1, int a2, int b2)
{
    //zalozenie a1 <= b1 && a2 <= b2
    if ((b1 >= a2) && (b1 <= b2))
    {
        return b1;
    }
    if ((b2 >= a1) && (b2 <= b1))
    {
        return b2;
    }
    return -1;
}

int main()
{
    int a1, b1;
    int a2, b2;
    printf("podaj poczatek i koniec pierwszego i drugiego odcinka a ja zwroce ci ich czesc wspolna: \n");
    //scanf("%d%d5d%d", &a1, &b1, &a2, &b2);
    scanf("%d%d", &a1, &b1);
    scanf("%d%d", &a2, &b2);
    int a3 = a3_fun(a1, b1, a2, b2);
    printf("a3 = %d", a3);
}