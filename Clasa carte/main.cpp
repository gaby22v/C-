#include<iostream.h>
#include<string.h>
#include<conio.h>
#include "carte.h"
int main()
{
	carte A,B("POO","Albatros",200,2011),C(B);
	A.afisare();
	cout<<endl;
	B.afisare();
	cout<<endl;
	C.afisare();
	cout<<endl;
	C.setTiraj();
	cout<<endl;
	B.getTitlu();
	cout<<endl;
	B.getEditura();
	cout<<endl;
	getAn(A);
	cout<<endl;
}