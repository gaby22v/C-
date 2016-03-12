#include<iostream.h>
#include<conio.h>
#include<math.h>
#include "complex.h"
int main()
{
	complex z1,z2(3,4),z3(-5,-6),z4(2,-2);
	z1.afisare();
	z2.afisare();
	z3.afisare();
	z4.afisare();
z1=z2.suma(z3);
z1.afisare();
z1=z2.scadere(z3);
z1.afisare();
complex z5;
z5=produs(z3,z4);
z5.afisare();
conjugat(z4);
z5.modul();
