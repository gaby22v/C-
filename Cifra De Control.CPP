#include<iostream.h>
#include<conio.h>

suma_cifre(long numar){
int suma=0;
while(numar > 0){
suma = suma + numar % 10;
numar = numar / 10;}
return suma;
}

main(){
long numar;
cout<<"Introduceti un numar natural: ";cin>>numar;
while (numar > 9){
numar = suma_cifre(numar);}
cout<<"Cifra de control este "<<numar;
getch();
}