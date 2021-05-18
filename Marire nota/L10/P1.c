#include <stdio.h>
#include <stdlib.h>



int main()
{
    int stocuri[1000], indici[1000], n, i, j, contor, k;

    printf("n=");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        printf("element=");
        scanf("%d",&stocuri[i]);
        indici[i]=i;

    }
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)
            if(stocuri[i]>stocuri[j])
            {
                contor=stocuri[i];
                stocuri[i]=stocuri[j];
                stocuri[j]=contor;
                contor=indici[i];
                indici[i]=indici[j];
                indici[j]=contor;
            }
    printf("k=");
    scanf("%d",&k);
    contor=0;
    for(i=1;i<=n;i++)
        while(indici[i]>0 && stocuri[i]<k)
        {
            k=k-stocuri[i];
            indici[i]--;
            contor++;
        }

    printf("%d", contor);
    return 0;
}
