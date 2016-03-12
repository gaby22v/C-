/*
Clasa institutie.
DM: Tip, anul constructie,domeniul
FCT: constructor implicit, constructor cu parametrii
destructor, functie de afisare, o functie ce returneaza tipul institutiei.
din clasa institutie se va deriva clasa universitate cu urmatoarea structura.
DM: Denumire , numar angajati, numar studenti, nr. facultatii
FCT: constructor cu parametrii, constr de afisare, o fct ce returneaza anul constructiei, o fct ce seteaza nr de
 
studenti, o functie friend ce returneaza den universitatii.
 
in programul principal se vor definii obiecte din ambele clase si se vor apela functiile definite anterior.
Pentru a avea acces direct din clasa universitate asupra datei membru „an” din clasa institutie aceasta trebuie
 
specificata in sectiunea protected.
*/
 

#include <iostream.h>
#include <string.h>
#include <conio.h>
#include "institutie.h" 
#include "universitate.h"
int main()
{    
institutie A("Publica",1970,"Financiar");
universitate B("Publica",1983,"educatie","UPG Ploiesti",12000,2500,5);
cout<<"\n Data Institutiei:\n";
B.afisare();
 
cout<<"\nUniversitatea: "<<getDenumire(B)<<" are "<<B.getStudenti()<<" studenti";
getch();
B.setStudenti();
B.afisare();
getch();
}
