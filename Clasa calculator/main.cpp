#include<iostream.h>
#include<string.h>
#include<conio.h>
#include "pc.h"
int main()
{
	pc c1,c2("intel","nvdia",6000,500);
	c1.afisare();
	c2.afisare();
	c2.getMemoria();
	c1.setProcesor("AMD");
	getch();
}