/*
Individ
DM: Greutate, inaltime, varsta.
Functii: Constructor implicit, constructor cu parametrii, functie de afisare, 
Din clasa individ se v-a deriva clasa pacient:
DM: Nume, Grupa Sanguina, diagnostic, nr. zile spitalizare si asigurare.
Functii: constructor cu parametrii, functie de afisare,functie friend care tinand cont de diagnostic sa determine gradul de invaliditate al pacientului(2 metode), functie friend care sa afiseze daca este nevoie de o plata suplimentara in cazul in care nr. zilelor de spitalizare > 5 si pacientul nu are asigurare, suplimentar se vor crea functii astfel incat sa se afiseze mesajul: „Pacientul XXX in varsta de YYY ani are grupa sanguina ZZZ.
Functia friend ce det gradul de invaliditate: Daca are diabet / TBC = gradul „sporit”, altfel = „mediu”.
Functia friend care afiseaza daca nr. zilelor de spitalizare > 5 si pacientul nu are asig , plateste suplimentar.
 
*/
 
#include <iostream.h>
#include <string.h>
#include <conio.h>
#include "individ.h" 
#include "pacient.h"
int main()
{ 
  int g=20,v=50;
  float h=1.5;
  individ A,B,C(),D(50,10,1.7);
  pacient E(g,v,h,"Pascu","B1","TBC","neasigurat",5);
  A.afisare();
  getch();
  E.afisarep();
  cout<<"\n Zile: "<<E.getZile();
  getch();
  Extracharge(E);
  getch();
  invalid(E);
  getch();
}