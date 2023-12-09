//Napisz program, który sprawdza czy podane przez użytkownika słowo jest palindromem. Wykorzystaj rozwiązania zadań 2,3.
#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool check_palindrom(char text[], int size)
{
    int length = strlen(text);

    for (int i = 0; i < length ; i++)
    {
        if (text[i] != text[length-i-1])
            return false;
    }
    return true;
}
int main()
{   
    int size = 100;
    char text[size];
    printf("Podaj slowo a ja sprawdze czy jest palindromem\n");
    scanf("%s", text);
    char flag = check_palindrom(text, size);

    if (flag)
    {
        printf("Tak, slowo '%s' to palindrom", text);
    }
    else
    {
        printf("Nie, slowo '%s' to nie palindrom", text);
    }
}