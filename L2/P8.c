///8.Sa se calculeze patratul unui numar natural N introdus de la tastatura folosind doar operatiile de tip bit wise.

#include <stdio.h>
#include <stdlib.h>

int russianPeasant(unsigned int a, unsigned int b)
{
    int p=0;

    while (b > 0)
    {
        if (b & 1)
            p+=a;

        a = a << 1;
        b = b >> 1;
     }
     return p;
}


int main()
{
    unsigned int N;
    printf("N=");
    scanf("%d",&N);

    printf("%d^2=%d",N,russianPeasant(N,N));
    return 0;
}

