#include <stdio.h>
#include <stdlib.h>
#define VMAX 17
#define defaultValue -1

int stack1[VMAX],stack2[VMAX],varf=-1;

void push(int elem, int stack[])
{
    ++varf;
    if(VMAX>varf)
        stack[varf]=elem;
    else
        printf("Stiva este plina");
}

int pop(int stack[])
{
    int a;
    a=stack[varf];
    stack[varf]=defaultValue;
    varf--;
    return a;
}

void DecimalToBinary(int numar)
{
    while(numar)
    {
        push(numar%2,stack2);
        numar/=2;
    }
}

void print(int stack[])
{

    while(varf>=0)
    {
        printf("%d",pop(stack));
    }

}

int main()
{
    short N;
    int cif,i;
    do
    {
        printf("cate cifre doriti sa cititi?");
        scanf("%d",&N);
    }while(N<=0||N>5);

    for(short i=0;i<N;i++)
    {
        do
        {
            printf("Cifra:");
            scanf("%d", &cif);
        }while(cif<=0||cif>9);

        push(cif,stack1);
    }

    cif=0;
    while(varf>-1)
    {
        cif=cif*10+pop(stack1);
    }


    DecimalToBinary(cif);

    cif=varf/2;
    short validator=0;

    for(int i=0;i<=cif/2;i++)
        if(stack2[i]!=pop(stack2))
            validator=1;

    if(validator==1)
        printf("Nu e palindrom");
    else
        printf("E palindrom");


    return 0;
}
