///7. Se da un numar natural N. Sa se afiseze suma bitiilor fiecarui numar de la 1 la N.
#include <stdio.h>
#include <stdlib.h>


int sum(unsigned int n)
{
    short cont=0;
    for(short i=7;i>=0;i--)
        cont+=n>>i&1;
    return cont;
}


int main()
{
    unsigned int N, cont=0;
    printf("Numarul este:");
    scanf("%d",&N);

    for(unsigned int i=1;i<=N;i++)
        cont+=sum(i);

    printf("Result-%d",cont);

    return 0;
}
