///2. Se citeste de la tastatura un numar C cu valori posibile intre 0-7. Dupa citirea numarului "C" se vor citi de la tastatura "N" numere iar acele numere care au in reprezentarea lor binara, bitul de pe pozitia "C" cu valoare 1, se vor afisa


#include <stdio.h>
#include <stdlib.h>


int functie(int n,short c)
{
    if(n>>(c-1)&1)
        return 1;
    return 0;
}



int main()
{
    int *v, N;
    short C;

    do
    {
        printf("Introduceti bitul cheie:");
        scanf("%d",&C);
    }while(C<0||C>7);

    printf("Introduceti numarul de elemente:");
    scanf("%d",&N);

    v=(int*)malloc(N*sizeof(int));

    for(int i=0;i<N;i++)
    {
        printf("v[%d]=",i);
        scanf("%d",&v[i]);
    }

    printf("Numerele care au pe bitul %d valoarea 1 sunt:",C);
    for(int i=0;i<N;i++)
        if(functie(v[i],C))
            printf("%d ",v[i]);

    return 0;
}
