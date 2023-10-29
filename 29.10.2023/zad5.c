#include<stdio.h>

int main()
{
    char a;
    printf("Chcesz podac kod czy znak?\n Wpisz 'k' jak kod lub 'z' jak znak: ");
    scanf("%c", &a);
    if (a == 'k')
    {
        int b;
        printf("Podaj kod: ");
        scanf("%d", &b);
        if ((b >= (int)'a' && b <= (int)'z') || (b >= (int)'A' && b <= (int)'Z'))
        {
            printf("Podany kod ASCII to %c i jest on litera w alfabecie\n", (char)b);
        }
        else
        {
            printf("Podany kod ASCII %c nie jest litera w alfabecie\n", (char)b);
        }
    }
    else if (a == 'z')
    {
        char c;
        printf("Podaj znak: ");
        scanf(" %c", &c);
        if (((int)c >= (int)'a' && (int)c <= (int)'z') || ((int)c >= (int)'A' && (int)c <= (int)'Z'))
        {
            printf("Znak %c jest w alfabecie\n", c);
        }
        else
        {
            printf("Znak %c nie jest w alfabecie\n", c);
        }
    }
}
