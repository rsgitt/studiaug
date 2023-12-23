//https://github.com/ZakrzewskiM30/SPJP2023-2024/blob/master/Lab07/Zadania.md
//todo
#include<stdio.h>
#define SIZE 100

int n = 0; //zmienna przechowujaca liczbe znakow w tablicy

void showTabFun(int * numTab, int size)
{
    if (n != 0)
    {
        for (int i = 0; i < n; i++)
        {
            printf("Index %d, zawartosc %d\n", i, numTab[i]);
        }
        return;
    }
    printf("Tablica jest pusta\n");
}

void moveElements(int * numTab, int idx)
{
    int flag = 1;
    while(flag)
    {
        if (idx < n)
        {
            numTab[idx] = numTab[idx+1];
            idx += 1;
        }
        else
        {
            n -= 1;
            flag = 0;
        }
    }
    return;
}

int checkIdx(int idx)
{
    if ((idx >= 0) && (idx < n))
    {
        return 1;
    }
    return 0;
}

void deleteElement(int * numTab, int size)
{
    int idx;
    printf("Podaj index elementu tablicy, ktory chcesz usunac\n");
    scanf("%d", &idx);
    if (checkIdx(idx))
    {
        moveElements(numTab, idx);
        return;
    }
    printf("Element o podanym indexie nie istnieje\n");
}

void addNewNumTable(int flag, int num, int * numTab)
{
    num -= '0';
    if (flag)
    {
        printf("%d", n);
        numTab[n] = num;
        n += 1;
        return;
    }
    printf("Nie podales liczby calkowitej!\n");
}

int checkInput(char intiger)
{
    int asciiIntiger = (int)intiger;
    if ((asciiIntiger >= (int)'0') && (asciiIntiger <= (int)'9'))
    {
        return 1;
    }
    return 0;
}

void checkTableSpace(int * numTab, int size) //zmniejszyc ilosc zadan funkcji 
{
    char intiger;
    if (n < size)
    {
        printf("\nW tablicy znajduje sie wolne miejsce, podaj liczbe ktora mam do niej dodac\n");
        scanf(" %c", &intiger);
        addNewNumTable(checkInput(intiger), intiger, numTab);
        return;
    }
    else
    {
        printf("Tablica jest pelna\n");
        return;
    }
}

void sumElements(int *numTab, int size)
{
    int sum = 0;
    for (int i=0; i<n; i++)
    {
        sum += numTab[i];
    }
    if (sum != 0)
    {
        printf("Suma elementow z tablcy wynosi %d", sum);
        return;
    }
    printf("Aktualnie nie moge wykonac tego zadania, poniewaz tablica jest pusta");
}

int main()
{
    int numTab[SIZE];
    int userChoice; //zmienna pozwalajaca wybrac uzytkownikowi operacje na tablicy (switch/case)
    int flag = 1;
    int * wskNumTab = numTab;

    while (flag)
    {
        printf("\nWybierz opcje od 0 do 5\n");
        scanf("%d", &userChoice);

        switch (userChoice)
        {
        case 0: //wybor '0' oznacza zakonczenie progamu
            flag = 0;
            break;

        case 1:
            showTabFun(numTab, SIZE); //wyswetl tablce lub zwroc informacje czy ma elementy
            break;
        
        case 2:
            checkTableSpace(numTab, SIZE);//sprawdza czy tablica jest pelna, jezeli nie to dodaje wprowadzona cyfre(o ile jest cyfra)
            break;

        case 3:
            deleteElement(numTab, SIZE);
            break;

        case 4:
            sumElements(numTab, SIZE);
            break;

        case 5:
            printf("Funkcja dostepna dla osob posadajacych subsktybcje premium+");//todo
            break;
            
        default:
            printf("Niezrozumiala instrukcja, sprawdz czy wybrales prawdziwa opcje\n\n");
        }
    }
}