#include<stdio.h>
 int main()
 {
    int a, b, dod, odj, mno;
    float dzie, rzdzie;
    scanf("%d%d", &a, &b);
    dod = a+b;
    odj = a-b;
    mno = a*b;
    dzie = a/b;
    rzdzie = a%b;
    printf("Wynik dodawania podanych liczb to %d\n", dod);
    printf("Wynik odejmowania to %d\n", odj);
    printf("Wynik mnozenia to %d\n", mno);
    printf("Wynik dzielenia to %f\n", dzie);
    printf("Wynik reszty z dzielenia to %f\n", rzdzie);
    return 0;
 }
