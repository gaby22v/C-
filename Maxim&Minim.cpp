#include<iostream.h>
#include<conio.h>

max(int numar, int max){
if(numar>max)max=numar;
return max;
}

min(int numar, int min){
if(numar < min)min=numar;
return min;
}

main(){
unsigned int n, numar, maxim=0, minim,i=1;
cout<<"Introduceti numarul de valori ce vor fi citite : ";cin>>n;
while(i<=n){
cout<<"Introduceti un numar: ";cin>>numar;
maxim = max(numar, maxim);
if(i==1)minim=maxim;
minim = min(numar, minim);
i++;}
cout<<"Numarul maxim introdus este "<<maxim<<endl;
cout<<"Numarul minim introdus este "<<minim<<endl;
getch();
}