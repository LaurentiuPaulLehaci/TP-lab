#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char numeSerial[50], parola[20];
	do
	{
		printf("Introduceti numele serialului: ");
		gets(numeSerial);
	} while (strlen(numeSerial) < 2 || strlen(numeSerial) > 50);
	do
	{
		printf("introduceti parola: ");
		gets(parola);
	} while (strlen(parola) < 6 || strlen(parola) > 20);

	///cele 2 do...while-uri au rolul de a pastra cu strictete dimensiunile impuse de catre limite, adica 2<=numeSerial<=50 si 6<=parola<=20
    for(int i=0;i<strlen(numeSerial);i++)
        printf("%d ",numeSerial[i]^parola[i%strlen(parola)] );

    ///acest for() parcurge litera cu litera titlul si face XOR intre fiecare litera din numeSerial si litera corespunzatoare din parola.
    ///In cazul in care numeSerial>parola, parola este luata de la capat ori de cate ori e nevoie prin coordonata i%strlen(parola)
	system("pause");
	return 0;
}
