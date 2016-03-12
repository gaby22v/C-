/*
Clasa VECTOR
DM: dimensiunea vectorului si V[20]
Functii: constr. implicit, constr. cu parametrii, afisare, return dim
vectorului
Functii (membru si friend) , redefinirea operatorilor + (aduni 2 vectori).
Extragere element din vector.
Inserare unui element pe o pozitie, maximul elementelor unui vector
 
*/
 
#include <iostream.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <values.h>
#include"vector.h"
int main()
{
	 vector A,B,C,B(5),C(10),D(5),E,F;
  A.print();
  cout<<"\n NEW:";
  B.print();
  cout<<"\n NEW:";
  C.print();
  cout<<"\n NEW:";
  D.print();
  cout<<"\n NEW:";
  E.print();
  cout<<"\n NEW:";
  F.print();
  cout<<"\n NEW:";
  C=A+B;
  A.extragere(A,1);
  A.print();
  cout<<"DIM= "<<A.getDim();
  cout<<"\n NEW:";
  A.insert(A,6,20);
  A.print();
getch();
}