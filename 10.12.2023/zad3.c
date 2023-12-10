/*Napisz funkcję typu void która przyjmuje adressy
 dwóch zmiennych i zamienia miejscami wartości znajdujące 
 się pod tymi adresami. W programie głównym stwórz dwie 
 zmienne o różnych wartościach i wypisz je przed i po wywołaniu funkcji.*/
#include<stdio.h>

void changePlaces(int * num1, int * num2)
{
    int waiting = *num1;
    *num1 = *num2;
    *num2 = waiting;
}

int main()
{
    int num1 = 5;
    int num2 = 6;
    printf("num1, adres %p, zawartosc %d\nnum2, adres %p, zawartosc %d\n", &num1, num1, &num2, num2);
    changePlaces(&num1, &num2);
    printf("num1, adres %p, zawartosc %d\nnum2, adres %p, zawartosc %d\n", &num1, num1, &num2, num2);
}