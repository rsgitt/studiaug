/*Napisz funkcję rekurencyjną która dla posortowanej tablicy liczb naturalnych
 i zadanej liczby sprawdzi, czy liczba jest elementem tej tablicy:

a) przeszukaj tablicę od lewej do prawej strony

b) skorzystaj z przeszukiwania binarnego*/
#include<stdio.h>

int check_num(int table[], int end, int num, int start)
{
    if (start >= end)
    {
        return 0;
    }

    int idx = start + ((end - start)/2);
    
    if (table[idx] == num)
    {
        return table[idx];
    }
    else if (table[idx] > num)
    {
        return check_num(table, end, num, idx);
    }
    else
    {
        return check_num(table, idx, num, start);
    } 
}
int main()
{  
    int num;
    int size = 10;
    int num_table[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("Podaj liczbe a ja sprawdze czy jest w tablicy: ");
    scanf("%d", &num);
    int num_out = check_num(num_table, size, num, 0);

    if (num_out != 0)
    {
        printf("Liczba %d jest w tablicyn\n", num);
    }
    else
    {
        printf("Liczba %d nie jest w tablicy\n", num);
    }
}


/*#include <stdio.h>

int check_num(int table[], int end, int num, int start) {
    if (start >= end) {
        return 0; // Zwróć 0, jeśli przekroczono granice tablicy
    }

    int idx = start + ((end - start) / 2);

    if (table[idx] == num) {
        return table[idx];
    } else if (table[idx] > num) {
        return check_num(table, idx, num, start);
    } else {
        return check_num(table, end, num, idx + 1);
    }
}

int main() {
    int num;
    int size = 10;
    int num_table[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("Podaj liczbę, a ja sprawdzę, czy jest w tablicy: ");
    scanf("%d", &num);

    int num_out = check_num(num_table, size, num, 0);

    if (num_out != 0) {
        printf("Liczba %d jest w tablicy.\n", num_out);
    } else {
        printf("Liczba %d nie jest w tablicy.\n", num);
    }

    return 0;
}
*/