#include<iostream.h>
#include<conio.h>

main(){
long numar, minim=9, maxim=0, cifra;
cout<<"Introduceti un numar: ";
cin>>numar;
do{
if(numar == 0){
goto end;
}
cifra = numar % 10;
if (cifra > maxim){
maxim = cifra;
}
if(cifra < minim){
minim = cifra;
}
numar = numar / 10;
} while (1);
end:
cout<<"Cifra maxima este "<<maxim<<" iar cea minima este "<<minim;
getch();
}