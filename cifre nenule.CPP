#include<iostream.h>
#include<conio.h>

exact3nenule(int numar){
int c_nenule=0;
while(numar > 0){
if((numar % 10)>0)c_nenule = c_nenule + 1;
numar = numar / 10;
}
return c_nenule;}

main(){
int n, numar, i=1;
bool exista = false;
cout<<"Introduceti numarul de valori pe care le veti introduce: ";cin>>n;
while(i<=n){
cout<<"Introduceti un numar: ";cin>>numar;
if(exact3nenule(numar)==3)exista = true;
i=i+1;
}
if(exista == true)cout<<"Exista un numar cu exact 3 cifre nenule!";
else cout<<"Nu exista un numar cu exact 3 cifre nenule!";
getch();}
