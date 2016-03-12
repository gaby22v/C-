/*
Punct (In spatiu / 3D)
DM: x,y,z;
Functii: Constructor implicit, 
constructor cu parametrii, 
destructor, 
functie de afisare a datelor membru,
Seteaza x
returneaza z,
calculeaza suma a 2 puncte (redefinirea operatorului "+")
scaderea a 2 puncte (redefinirea "-")
redefinirea operatorului "<<"
redefinirea operatorului ">>"
 
OBS! programul o sa contina cel putin o functie inline si o fct friend.
*/
 
#include <iostream.h>
#include <conio.h>
#include "punct.h" 

 
int main()
{ 
  punct A,B(1,2,3),C(A),D,E;
  A.print();
  cout<<endl;
  B.print();
  cout<<endl;
  C.print();
  cout<<endl;
  D.setX(10);
  cout<<endl;
  cout<<A.getZ();
  cin>>E;
  cout<<"\nD"<<D;
getch();
}