///1. Sa se scrie un program care citeste de la tastura "N" numere naturale. Pentru fiecare numar se va determina forma lui binara, se va calcula inversul binar ,iar mai apoi se va afisa numarul zecimal calculat din inversul binar.


#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void afis_bin(unsigned int n)
{
    for(short i=7;i>=0;i--)
    {
        printf("%d",n>>i&1);
        if(i%4==0)
            printf(" ");
    }

}

void functie(unsigned int n)
{

    printf("\nNumarul in binar este:");
    afis_bin(n);

    n=~n;

    printf("\nNumarul negat, in binar, este:");
    afis_bin(n);

    unsigned int nr=0;

    for(short i=7; i>0;i--)
        nr+=(unsigned int)pow((n>>i&1)*2,i);

    if(n>>0&1!=0)
        nr++;

    printf("\nNumarul negat:%d\n\n", nr);

}



int main()
{
    unsigned int *v, N;

    printf("Introduceti numarul de numere:");
    scanf("%d",&N);

    v=(int*)malloc(N*sizeof(unsigned int));
    for(unsigned int i=0;i<N;i++)
    {
        printf("v[%d]=",i);
        scanf("%d",&v[i]);
    }

    for(unsigned int i=0;i<N;i++)
    {
        printf("Numarul %d este %d",i,v[i]);
        functie(v[i]);

    }

    return 0;
}
