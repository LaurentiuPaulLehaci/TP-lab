///2. Sa se realizeze un program care imi transforma un numar zecimal intr - un numar binar, cifrele binare vor fi insiruite intr - un sir de elemente folosind pointer - ul.
#include <stdio.h>
#include <stdlib.h>

typedef struct bit
{
	unsigned char *val;
	struct bit *urm;
}nod;

nod *adaugare(nod *prim, unsigned char v)
{
	nod *p;
	p = (nod*)malloc(sizeof(nod));
	p->val= (char*)malloc(sizeof(unsigned char));
	if(p==NULL || p->val==NULL)
	{
		printf("eroare");
		exit(0);
	}

	p->val=v;
	p->urm = NULL;
	if (prim == NULL)
		return p;
	else
	{
		p->urm = prim;
		return p;

	}


}

void afisare(nod *prim)
{
	nod *q;
	q = prim;
	while(q!=NULL)
	{
		printf("%d ", q->val);
		q = q->urm;
	}
}



int main()
{
    nod *prim = NULL;
    int nr;
    printf("Introduceti numarul:");
    scanf("%d",&nr);
    while(nr)
    {
        prim=adaugare(prim,nr%2);
        nr=nr/2;
    }
    afisare(prim);
    return 0;
}

