///3. Folosind doar operatii pe biti sa se verifice daca un numar introdus de la tastatura este pozitiv, negativ sau zero.

#include <stdio.h>
#include <stdlib.h>


void functie(int n)
{
    short cont=0;
    for(short i=31;i>=0;i--)
        cont+=n>>i&1;
    if(cont==0)
        printf("Numarul este 0");
    else
        if(n>>31==0)
            printf("Numarul este pozitiv");
        else
            printf("Numarul est negativ");


}

int main()
{
    int n;
    printf("Introduceti numarul:");
    scanf("%d",&n);
    functie(n);

    return 0;
}
