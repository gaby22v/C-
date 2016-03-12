/*
Se considera o fractie a carei numitor este un numar prim.
Sa se verifice daca este ireductibila si subunitara
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("a=");scanf("%i",&a);
	printf("b=");scanf("%i",&b);
	if(a%b==0)
		printf("Reductibila\n");
	else
		printf("Ireductibila\n");
	if(a<b)
		printf("Subunitara\n");
	else
		printf("Supraunitara\n");
getch();
}