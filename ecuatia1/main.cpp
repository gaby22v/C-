/*
Sa se calculeze 2+x-y
*/
#include<stdio.h>
#include<conio.h>
int x,y,a,b,c;
void ec1()
{
  a=2+x-y;
}
void ec2()
{
   b=x*a-2+y;
}
void ec3()
{
	c=a-2*b+x;
}
int main()
{
	printf("x=");scanf("%i",&x);
	printf("y=");scanf("%i",&y);
	printf("Prima ecuatie=%i",ec1());
	printf("A doua ecuatie=%i",ec2());
	printf("A treia ecuatie=%i",ec3());
getch();
}
