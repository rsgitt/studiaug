/*Za pomocą funkcji rekurencyjnej napisz program, który
dla podanej liczby dziesiętnej wypisze na ekren tę liczbę w postaci binarnej.*/
#include<stdio.h>
int bin_sys(int num)
{
    if (num > 0)
    {
        int modulo = num % 2;
        bin_sys(num/2);
        printf("%d", modulo);
    }
    else
    {
        return 1;
    }
}
int main()
{
    int num;
    printf("Podaj liczbe w systemie 10 a ja zwroce ja w systemie 2: \n");
    scanf("%d", &num);
    bin_sys(num);
    printf("\n");
}