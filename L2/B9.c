///9.Sa se inverseze doua numere naturale fara a se folosii de o variabila auxiliara, ci doar operatii bit wise.
#include <stdio.h>
#include <stdlib.h>


int main()
{
    unsigned int a,b;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);

    a=a^b;
    b=b^a;
    a=a^b;

    printf("\na=%d \nb=%d",a,b);

    return 0;
}
