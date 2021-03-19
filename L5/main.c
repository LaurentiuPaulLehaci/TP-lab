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
    for(i=0;i<=varf;i++)
        printf("%d ",v[i]);
}

int functie(int X)
{
    int i,A,cont=0;
    push(X);
    push(X);
    push(X);
    //printf("%d\n ",v[varf]);
    A=pop();
    while(A!=1)
    {
        A=pop();
        if(A%2==0)
        {
            push(A/2);
            push(A/2);
        }
        else
        {
            push(A*3+1);
            push(A*3+1);
        }

        cont++;
    }

    return cont;
}
int main()
{
    intu i,cont=0,x[100],aux;

     for(int i=1;i<=100;i++)
     {
         x[i-1]=functie(i);
         varf=-1;
         //printf("\nvaloare %d",functie(i));
     }

     for(i=0;i<100;i++)
        if(x[i]>cont)
     {
        cont=x[i];
        aux=i+1;
     }

     printf("valoare %d numar %d",cont,aux);

    return 0;
}
