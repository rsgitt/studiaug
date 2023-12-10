/*Napisz program w którym będzie zmienna globalna,
 w funkcji main stwórz zmienną lokalną i przypisz jej 
 watrość zmiennej globlanej, po wypisz na ekran adressy 
 obu zmiennych. Następnie napisz funkcję przyjmującą dwie 
 liczby i wypisującą ich adressy i wywołaj ją na wcześniej 
 utworzonych zmiennych. Przed uruchomieniem programu spróbuj
  przewidzieć jego działanie (ile różnych adresów zostanie wypisanych).*/
#include<stdio.h>

int globalvar= 1;

void adresFun(int num1, int num2)
{
    printf("Adres 1 %p\nAdres 2 %p\n", &num1, &num2);
}
int main()
{
    int localvar = globalvar;
    printf("Adres globalnej %p\nAdres lokalnej %p\nZawartosc %d\n\n", &globalvar, &localvar, localvar);
    adresFun(globalvar, localvar);
}