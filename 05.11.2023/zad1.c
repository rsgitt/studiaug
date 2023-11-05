#include <stdio.h>

int main()
{
    int input, sum;
    int licz = 0;
    int i = 0;
    printf("Podaj liczbe a ja zwroce sume kwadratow od 1 do n: \n");
    scanf("%d", &input);

    while (licz <= input)
    {
        sum += i*i;
        licz++;
        i++;
    }

    printf("Wynik to %d\n", sum);

}