#include<iostream.h>
#include<conio.h>
#include<string.h>
#include "telefon_header.h"
int main()
{
	telefon t,t1("Samsung","rosu",1700,120);
	t.afisare();
	cout<<endl;
	t1.afisare();
	cout<<endl;
	t.setPret(2000);
	cout<<endl;
	t.afisare();
	cout<<endl;
	t1.getCuloare();
	cout<<endl;
	getch();
}