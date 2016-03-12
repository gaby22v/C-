#include<iostream.h>
#include<conio.h>

main()
{
long numar, numar_invers, numar_salvat;
cout<<"Introduceti un numar: ";cin>>numar;
numar_salvat = numar;
while(numar>0){
numar_invers = numar_invers * 10 + numar % 10;
numar = numar / 10;}
if(numar_salvat==numar_invers){
cout<<"Numarul este palidrom!";
}
else
cout<<"Numarul nu este palidrom!";
getch();
}