///5. Sa se verifice daca operatia BINARA de "SAU" ("OR") aplicata pe un sir de �N� numere intregi citit de la tastatura rezulta un numar par sau impar. NU aveti voie sa folositi �%�, impartire cu rest / modulo.

#include <stdio.h>
#include <stdlib.h>




int main()
{
    int *v, N;

    printf("Introduceti numarul de elemente din vector:");
    scanf("%d",&N);

    v=(int*)malloc(N*sizeof(int));

    for(int i=0;i<N;i++)
    {
        printf("v[%d]=",i);
        scanf("%d",&v[i]);
    }

    for(int i=0;i<N;i++)                 ///Initial am incercat sa pun conditia (v[i]>>0||0)
        if(v[i]>>0&1)                    ///Am tot incercat sa nu folosesc "&1", dar programul refuza sa functioneze corect.
            printf("impar ");            ///Aparent, folosind operatia "OR" nu se poate afla paritatea unui numar
        else
            printf("par ");


    return 0;
}
