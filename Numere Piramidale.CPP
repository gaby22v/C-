#include<iostream.h>
#include<conio.h>
main(){
int numar, numar_p=0, i=0;
cout<<"Introduceti un numar intreg: ";cin>>numar;
while(i<numar){
i=i+1;
numar_p=numar_p + i*i;
cout<<"Numarul piramidal #"<<i<<": "<<numar_p<<endl;}
getch();
}