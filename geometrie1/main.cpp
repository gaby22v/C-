/*Se cunosc 3 valori reale.Verificati daca ele pot reprezenta lungimile laturilor unui triunghi,
iar in caz afirmativ determinati tipul acestuia.
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	float a,b,c;
	printf("a=");scanf("%f",&a);
	printf("b=");scanf("%f",&b);
	printf("c=");scanf("%f",&c);
	if(a<0||b<0||c<0)
		printf("Valori negative\n");
	else
		if(a>=b+c||b>=a+c||c>=a+b)
			printf("Nu este triunghi\n");
		else
			if(a==b&&b==c&&a==c)
				printf("Echilateral\n");
			else
				if(a==b||a==c||b==c)
					printf("Isoscel\n");
				else
					if(a*a+b*b==c*c||b*b+c*c==a*a||c*c+a*a==b*b)
						printf("Dreptunghic\n");
					else
						printf("Oarecare\n");
	getch();
}