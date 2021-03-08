///6. Se citeste de la tastatura un numar zecimal pana in 255. Sa se afiseze forma binara a numarului iar apoi din sirul binar sa se genereze valoarea maxima
#include <stdio.h>
#include <stdlib.h>

void afis_bin(unsigned int n)
{
    for(short i=7;i>=0;i--)
    {
        printf("%d",n>>i&1);
        if(i%4==0)
            printf(" ");
    }
    printf("\n");

}

int sum(unsigned int n)
{
    short cont=0;
    for(short i=7;i>=0;i--)
        cont+=n>>i&1;
    return cont;
}

void creare(short n)
{
    for(int i=7;i>=0;i--)
    {
        if(n>0)
            printf("1");
        else
            printf("0");

        n--;

        if(i%4==0)
            printf(" ");
    }

}

int main()
{
    unsigned int N;
    printf("Numarul este:");
    scanf("%d",&N);

    printf("\nNumarul in binar este:");
    afis_bin(N);
    printf("Maximul binar este:");
    creare(sum(N));

    return 0;
}
