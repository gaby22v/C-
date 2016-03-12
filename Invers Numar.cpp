#include<iostream.h>
#include<conio.h>
main(){
unsigned long numar, numar2=0;
int cifra;
cout<<"introduceti un numar: ";cin>>numar;
while(numar>0){
cifra = numar % 10;
numar2 = numar2 * 10 + cifra;
numar = numar / 10;}
cout<<numar2;
getch();
}