//Napisz program, który wczyta od użytkownika dwie liczby i zwróci wynik jednego z czterech działań (dodawanie, odejmowanie, mnożenie, dzielenie), za wykonanie każdego z działań powinna odpowiadać osobna funkcja. Za pomocą instrukcji case/switch stwórz menu które pozwoli użytkownikowi wybrać działanie.

#include<stdio.h>

float calculator(float num1, float num2)
{
    char symbol;
    float result;
    printf("Napisz symbol a ja zrobie dane dzialanie\n");
    printf("Do wyboru +, -, *, / :");
    scanf(" %c", &symbol);
    switch(symbol)
    {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = (float)num1 / (float)num2;
            break;
    }
    return result;
}
int main()
{
    float calc_return;
    float num1, num2;
    printf("Podaj dwie liczby a ja zwroce:\n");
    scanf("%f%f", &num1, &num2);
    calc_return = calculator(num1, num2);
    printf("Wynik: %0.3f", calc_return);
}