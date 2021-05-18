#include <stdio.h>
#include <stdlib.h>
#define MAX_VALUE 32
#define  defaultValue -1
int v[MAX_VALUE],varf=-1;

void push(int elem)
{
    ++varf;
    if(MAX_VALUE>varf)
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
    while(varf>-1)
    {
        printf("%d",pop());
        if(varf%4==3)
            printf(" ");
    }
}
int main()
{
    int a,n;
    printf("Introduceti numarul de numere:");
    scanf("%d",&n);
    while(n)
    {
        printf("\nNumar:");
        scanf("%d",&a);
        while(a)
        {
            if(a%2==1)
                push(0);
            else
                push(1);
            a=a/2;
        }
        while(varf<7)
        {
            push(1);
        }
        print();
        n--;
    }

    return 0;
}
