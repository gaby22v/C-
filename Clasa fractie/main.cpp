#include<iostream.h>
#include<conio.h>
#include "fractie.h"
int main()
{
	fractie f1,f2,f3;
	f1.setFractie();
	f2.setFractie();
	f3=f1+f2;
	cout<<"f1+f2=";f3.afisare();
	f3=f1-f2;
	cout<<"f1-f2=";f3.afisare();
	f3=f1*f2;
	cout<<"f1*f2=";f3.afisare();
	f3=f1/f2;
	cout<<"f1/f2=";f3.afisare();
	getch();
}