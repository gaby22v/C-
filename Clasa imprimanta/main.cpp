#include<iostream.h>
#include<conio.h>
#include<string.h>
#include "imprimanta.h"
int main()
{
	imprimanta a,b("HP","Laser",30);
	cout<<a;
	cout<<b;
	cin>>a;
	cout<<a;
	getch();
}