#include<stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#define MAX_SIZE 4

int Back( int x, int y, int labirint[MAX_SIZE][MAX_SIZE], int iesire[MAX_SIZE][MAX_SIZE])
{
    if (solutie(x, y, iesire) == 1)
    {
        afisare(iesire);
        return 1;
    }

    if (validare( x, y, labirint) == 1)
    {
        iesire[x][y] = 1;

        if (Back(x + 1, y, labirint, iesire) == 1)
            return 1;

        if (Back(x, y + 1, labirint, iesire) == 1)
            return 1;

        iesire[x][y] = 0;
        return 0;
    }

    return 0;
}

void afisare(int iesire[MAX_SIZE][MAX_SIZE])
{
    for (int i = 0; i < MAX_SIZE; i++)
        for (int j = 0; j < MAX_SIZE; j++)
            if(iesire[i][j]==1)
            {
                printf(" %d%d ",i,j);
                if(i<=MAX_SIZE-1 && j<MAX_SIZE-1)
                    printf("-");
            }

}

int validare(int x, int y, int labirint[MAX_SIZE][MAX_SIZE])
{
    if (x >= 0 && x < MAX_SIZE && y >= 0 && y < MAX_SIZE && labirint[x][y] == 1)
        return 1;

    return 0;
}

int initializare()
{
    int (*iesire)[MAX_SIZE], i, j;
    iesire = malloc(sizeof(int[MAX_SIZE][MAX_SIZE]));
    for (i = 0; i < MAX_SIZE; i++)
        for (j = 0; j < MAX_SIZE; j++)
        {
            if(iesire != NULL)
            iesire[i][j] = 0;
        }
    return iesire;
}

int rezolvare(int labirint[MAX_SIZE][MAX_SIZE])
{
    int** iesire;

    iesire = initializare();

    if (Back(0, 0, labirint, iesire) == 0)
    {
        printf("Solution doesn't exist");
        return 0;
    }

    free(iesire);
    return 1;
}

int solutie(int x, int y, int iesire[MAX_SIZE][MAX_SIZE])
{
    if (x == MAX_SIZE - 1 && y == MAX_SIZE - 1)
    {
        iesire[x][y] = 1;
        return 1;
    }
    return 0;
}

int main()
{
    int labirint[MAX_SIZE][MAX_SIZE] =
    {
    {1, 0, 0, 0},
    {1, 1, 0, 1},
    {0, 1, 0, 0},
    {1, 1, 1, 1}
    };

    rezolvare(labirint);
    system("pause");
    return 0;
}
