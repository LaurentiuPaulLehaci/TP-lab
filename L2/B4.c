///4. Folosind doar operatii pe biti si fara operatorul de "inmultire" sa se calculeze produsul a doua numere intregi citite de la tastatura.

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
    unsigned int a,b;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);

    printf("%d*%d=%d",a,b,russianPeasant(a,b));
    return 0;
}

