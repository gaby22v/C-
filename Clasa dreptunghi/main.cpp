#include<iostream.h>
#include<conio.h>
#include "dreptunghi.h"
int main()
{
	drept a,b(2,3);
	a.afisare();
	b.afisare();
	a.setLungime(5);
	b.getLatime();
	cout<<endl;
	cout<<"Aria:"<<b.aria();
	getch();
}