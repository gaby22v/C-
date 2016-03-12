/*
 
Class Mama
DM: Dim. parului (lungime), culoarea ochilor,
FM: constr cu parametrii, destructorul, afisare, set lungimea parului,
class Tata
DM: Nume, barba,culoarea pielii.
FM: constr cu parametri, destructor, afisare, return culoarea pielii.
Din cele 2 clase se va deriva
class puradel.
DM: varsta,inaltime.
FM: constr. implicit, destructor, afisare, redefinirea operatorului <<
 
*/
 
#include <iostream.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include"mama.h"
#include"tata.h"
#include"puradel.h"
int main()
{
	mama A(10,"Black");
tata B("Ion","Caucazian",1);
puradel C(10,"Negru","Ioan","Rosu",1,20,1.60);
A.print();
B.print();
C.print();
cout<<C;
getch();
}