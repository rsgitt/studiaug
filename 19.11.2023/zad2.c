//Napisz funkcję typu int która przyjmuje jako argumenty dwa znaki i sprawdza czy są identyczne. Dla identycznych znaków funkcja powinna zwracać 1, w przeciwnym przypadku 0.
#include<stdio.h>

char tester(char sym1, char sym2)
{
    char result = 0;
    if (sym1 == sym2)
        result = 1;
    return result;
}
int main()
{
    char sym1, sym2;
    char result;
    printf("Podaj dwa znaki a ja spradze czy sa identyczne:\n");
    scanf(" %c %c", &sym1, &sym2);
    result = tester(sym1, sym2);
    if (result)
        printf("Znak %c i %c sa takie same\n", sym1, sym2);
    else
        printf("Znak %c i %c nie sa takie same\n", sym1, sym2);
}