//Za pomocą struct napisz strukturę, która będzie zawierała dane kontaktowe
// do osoby (imię, nazwisko, nr_telefonu). Zapisz dwie osoby i wypisz zawartość struktury.
#include<stdio.h>

struct person
{
    char name[25];
    char lastName[25];
    int phoneNum;
};

int main()
{
    struct person p;
    scanf("%s",(char *) &p.name);
    scanf("%s", (char *) &p.lastName);
    scanf("%d", (int *) &p.phoneNum);
    printf("\n");
    printf("%s\n", p.name);
    printf("%s\n", p.lastName);
    printf("%d\n", p.phoneNum);
}