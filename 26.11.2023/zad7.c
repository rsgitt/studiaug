/*Napisz funkcję rekurencyjną która dla posortowanej tablicy liczb naturalnych
 i zadanej liczby sprawdzi, czy liczba jest elementem tej tablicy:

a) przeszukaj tablicę od lewej do prawej strony

b) skorzystaj z przeszukiwania binarnego*/
#include<stdio.h>


int check_num(int table, int end, int num, int start)
{
    int idx = start + ((end - start)/2)
    if (table[idx] > num)
    {
        return check_num(table, idx, num, start)
    }
    else if (table[start + ((end - start)/2)] < num)
    {
        return check_num(table, end, num, idx)
    }
    
}
int main()
{
    
    int num;
    int size = 10;
    int num_table[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("Podaj liczbe a ja sprawdze czy jest w tablicy");
    scanf("%d", &num);
    num_out = check_num(num_table, size, num, 0);

}
