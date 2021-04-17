#include <stdio.h>
#include <stdlib.h>

///tr=tail-recursive
int factorial_tr(int n, int produs)
{
    if(n==1)
        return produs;
    return factorial_tr(n-1,produs*n);
}

///ntr=non-tailed-recursive
int factorial_ntr(int n)
{
    return factorial_tr(n,1);

}

///dr=direct recursive
int factorial_dr(int n)
{
    if(n>1)
        return n*factorial_dr(n-1);
    return 1;
}

///idr=indirect recursive
int factorial_idr(int n)
{
    if(n>1)
        return auxiliar_idr(n);
}
int auxiliar_idr(int x)
{
    return x*factorial_idr(x-1);
}

int binary_search(int v[], int n, int stanga, int dreapta)
{
    if(dreapta>stanga)
    {
        //printf("%d",(stanga+dreapta)/2);
        if(v[(stanga+dreapta)/2]==n)
            return ((stanga+dreapta)/2);
        else
            if(v[(stanga+dreapta)/2]>n)
                return binary_search(v,n,stanga,((stanga+dreapta)/2)-1);
            else
                return binary_search(v,n,(stanga+dreapta)/2-1,dreapta);
    }
    return -1;
}

int suma_recursiva(int n)
{
    if(n>0)
        return n+suma_recursiva(n-1);
    return 0;
}

void quicksort(int v[], int stanga, int dreapta)
{
    int pivot;
    if(stanga<dreapta)
    {
        pivot=pivotare(v, stanga, dreapta);

        quicksort(v, stanga, pivot-1);
        quicksort(v, pivot+1, dreapta);
    }

}

int pivotare(int v[], int stanga, int dreapta)
{
    int pivot=v[dreapta];
    int i=stanga-1, j, auxiliar;

    for(j=stanga; j<=dreapta-1; j++)
    {
        if(v[j]<pivot)
        {
            i++;
            auxiliar=v[j];
            v[j]=v[i];
            v[i]=auxiliar;
        }
    }
    auxiliar=v[i+1];
    v[i+1]=v[dreapta];
    v[dreapta]=auxiliar;
    return i+1;

}

void bubblesort(int v[], int n)
{
    int auxiliar;
    for(int i=0;i<n;i++)
        if(v[i]>v[i+1])
    {
        auxiliar=v[i];
        v[i]=v[i+1];
        v[i+1]=auxiliar;
    }

    if(n>2)
        bubblesort(v, n-1);
}

int main()
{
    int v[100],n,x, suma;
    do
    {
        printf("\nAlegeti optiunea:");
        printf("\n1. Calcul factorial 'tail-recursive'");
        printf("\n2. Calcul factorial 'non-tailed-recursive");
        printf("\n3. Calcul factorial 'direct recursive'");
        printf("\n4. Calcul factorial 'indirect recursive'");
        printf("\n5. Binary search recursive");
        printf("\n6. Suma primelor N numere recursiv");
        printf("\n7. Suma primelor N numere cu for");
        printf("\n8. Suma primelor N numere cu while");
        printf("\n9. Suma primelor N numere cu do while");
        printf("\n10. QuickSort recursiv");
        printf("\n11. BubbleSort recursiv");
        printf("\n0. Iesire");
        printf("\nOptiunea dumneavoastra este: ");
        scanf("%d", &x);
        switch(x)
        {
        case 0:
            exit(0);

        case 1:
            printf("\nintroduceti N:");
            scanf("%d",&n);
            printf("%d\n",factorial_tr(n,1));
            break;

        case 2:
            printf("\nintroduceti N:");
            scanf("%d",&n);
            printf("%d\n",factorial_ntr(n));
            break;

        case 3:
            printf("\nintroduceti N:");
            scanf("%d",&n);
            printf("%d\n",factorial_dr(n));
            break;

        case 4:
            printf("\nintroduceti N:");
            scanf("%d",&n);
            printf("%d\n",factorial_idr(n));
            break;

        case 5:
            printf("\nintroduceti N:");
            scanf("%d",&n);
            for(int i=0;i<n;i++)
            {
                printf("v[%d]",i);
                scanf("%d", &v[i]);
            }
            int cautat;
            printf("Numarul cautat:");
            scanf("%d",&cautat);
            printf("%d",binary_search(v,cautat,-1,n+1));
            break;

        case 6:
            printf("\nintroduceti N:");
            scanf("%d",&n);
            printf("%d", suma_recursiva(n));
            break;

        case 7:
            printf("\nintroduceti N:");
            scanf("%d",&n);
            suma=0;
            for(int i=0;i<=n;i++)
                suma+=i;
            printf("%d",suma);
            break;

        case 8:
            printf("\nintroduceti N:");
            scanf("%d",&n);
            suma=0;
            while(n>0)
            {
                suma+=n;
                n--;
            }
            printf("%d",suma);
            break;

        case 9:
            printf("\nintroduceti N:");
            scanf("%d",&n);
            suma=0;
            do
            {
                suma+=n;
                n--;
            }while(n>0);
            printf("%d",suma);
            break;

        case 10:
            printf("\nintroduceti N:");
            scanf("%d",&n);
            for(int i=0;i<n;i++)
            {
                printf("v[%d]",i);
                scanf("%d", &v[i]);
            }
            quicksort(v,0,n);
            printf("\nVectorul sortat este:");
            for(int i=0;i<n;i++)
                printf("%d ", v[i]);
            break;

        case 11:
            printf("\nintroduceti N:");
            scanf("%d",&n);
            for(int i=0;i<n;i++)
            {
                printf("v[%d]",i);
                scanf("%d", &v[i]);
            }
            bubblesort(v,n);
            printf("\nVectorul sortat este:");
            for(int i=0;i<n;i++)
                printf("%d ", v[i]);
            break;

        }


    }while(1);


    return 0;
}
