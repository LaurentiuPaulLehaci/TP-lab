#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fibo[100], k,i=2,contor=0,cont=0;
    printf("k=");
    scanf("%d",&k);
    fibo[0]=1;
    fibo[1]=1;
    do
    {
        fibo[i]=fibo[i-1]+fibo[i-2];
        i++;
        contor++;
    }while(fibo[i-1]<=k);

    for(i=contor;i>=0;i--)
        if(k-fibo[i]>=0)
        {
            k-=fibo[i];
            cont++;
        }

    if(k==0)
        printf("%d",cont);
    else
        printf("nu se poate");


    return 0;
}
