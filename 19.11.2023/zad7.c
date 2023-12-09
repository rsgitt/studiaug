/*Napisz program, który dla podanej tablicy trójwymiarowej wypisze te elementy które są większe od swoich sąsiadów. Za sąsiadów elementu T[x][y][z] uznajemy te elementy, których współrzędne różnią się o co najwyżej 1 poza samym T[x][y][z].*/
//todo
#include<stdio.h>

int minFun(int a, int b)
{
    if (a > b)
    {
        return b;
    }
    return a;
}

int maxFun(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}

int countLenFunX(int table)
{
    int len = (sizeof(table) / sizeof(table[0]));
    return len;
}
int countLenFunXY(int table[])
{
    int len = sizeof(table[0]) / sizeof(table[0][0]);
    return len;
}
int countLenFunXYZ(int table[][])
{
    int len = sizeof(table)[0][0] / sizeof(table[0][0][0]);
    return len;
}

int ff(int size; int table[][size][size], int x, int y, int z)
{
    for (int i = maxFun(0, x-1); i <= minFun(x+1, countLenFunX(table)-1); i++){
        for (int j = maxFun(0, y-1); j <= minFun(y+1, countLenFunXY(table[i])-1); j++){
            for (int k = maxFun(0, z-1); k <= minFun(z+1, countLenFunXYZ(table[i][j])-1; k++){
                if ((i == x) && (j == y) && (k == z)){
                    continue;
                }
            }
        }
    }
    return 1;
}

int main()
{
    int size = 3
    int tripletab[size][size][size] = { {{1,2,3}, {4,5,6}, {7,8,9}},
                                        {{3,2,1}, {7,9,8}, {5,4,6}},
                                        {{9,8,7}, {6,5,4}, {3,2,1}}};
    for (int x = 0; x < size; x++)
    {
        for (int y = 0; y < size; y++)
        {
            for (int z = 0; z < size; z++)
            {
                ff(size, tripletab[][][], x, y, z);
            }
        }
    }
}