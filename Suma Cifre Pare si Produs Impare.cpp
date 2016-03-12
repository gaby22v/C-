#include<iostream.h>
#include<conio.h>
main(){
unsigned long numar;
int cifra, suma=0, produs = 1, cifre_pare=0, cifre_impare=0;
cout<<"introduceti un numar: ";cin>>numar;
while(numar>0){
cifra = numar % 10;
if(cifra % 2 == 0){
suma = suma + cifra;
cifre_pare++;
}
else {
produs = produs * cifra;
cifre_impare++;
}
numar = numar / 10;}
cout<<"Suma cifrelor pare este "<<suma<<endl;
cout<<"Produsul cifrelor impare este "<<produs<<endl;
cout<<"Numarul de cifre pare este "<<cifre_pare<<endl;
cout<<"Numarul de cifre impare este "<<cifre_impare<<endl;
getch();
}