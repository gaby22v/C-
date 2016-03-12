/*
Fie x un numar natural de cel mult 9 cifre.Sa se determine ultima cifra a puteri 2x
*/
#include<stdio.h>
#include<conio.h>
long int x;
int main()
{
	printf("x=");scanf("%i",&x);
	if(x==0)
		printf("0\n");
	else
		if(x%4==1)
			printf("2\n");
		else
			if(x%4==2)
				printf("4\n");
			else
		       if(x%4==3)
				   printf("8\n");
			   else
				   printf("6\n");
	getch();
}