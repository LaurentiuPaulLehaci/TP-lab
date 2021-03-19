#include <stdio.h>
#include <stdlib.h>
#define VMAX 1000
#define defaultValue -1

int v[VMAX], varf=-1;

void push(int elem)
{
    ++varf;
    if(VMAX>varf)
        v[varf]=elem;
    else
        printf("Stiva este plina");
}

int pop()
{
    int a;
    a=v[varf];
    v[varf]=defaultValue;
    varf--;
    return a;
}

void print()
{
    int i=0;
    while(varf>=0)
        printf("%d ",pop());
}

int main()
{
    short C;
    int n,i,aux;
    printf("Introduceti bitul:");
    scanf("%d",&C);
    printf("Introduceti numarul de numere:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf(" Introduceti numar:");
        scanf("%d",&aux);
        if(aux>>C&1)
            push(aux);
    }
    print();
    return 0;
}
