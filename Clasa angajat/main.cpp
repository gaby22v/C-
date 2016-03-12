#include <iostream.h>
#include <conio.h>
#include <string.h>
#include "angajat.h"
int main()
{  
angajat A,B("TIMF","Secretara",15,1500),C(B),D;
getch();
A.afisare();
getch();
B.afisare();
getch();
C.afisare();
getch();
D.afisare();
getch();
cout<<"\nVechime D: "<<D.getVechime();
cout<<"\nSalariu C: ";
float x;
cin>>x;
C.setSalariu(x);
cout<<"\nSalariu C: "<<C.getSalariu();
getch();
cout<<"\nDepartament C: "<<C.getDepartament();
getch();
cout<<"\nD: ";
setVechime(D);
getch();
angajat::getNrAngajati();
getch();
}