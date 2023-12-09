//todo
//Napisz funkcję, która przyjmuje napis s i liczbę i, funkcja powinna zwracać i-ty znak napisu s.
#include<stdio.h>

unsigned char find1(unsigned char textf[], int sizef, int numberf)
{
    unsigned char sign;
    for (int i = 0; i < numberf; i++)
    {
        sign = textf[i];
    }
    return sign;
}


int main()
{

    int size = 20;
    unsigned char text[size];
    int number;
    unsigned char result;
    printf("Podaj wybrany przez ciebie napis i liczbe i a ja zworce i-ty znak znak napisu\n");
    scanf(" %s", text);
    scanf(" %d", &number);
    result = find1(text, size, number);
    printf("%c\n", result);
    //result = text[number-1];
    //printf("%c", result);
}