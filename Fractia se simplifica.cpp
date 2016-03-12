#include<iostream.h>
#include<conio.h>
main(){
int a,b,k;
cout<<"Introduceti primul numar: ";cin>>a;
cout<<"Introduceti al doilea numar: ";cin>>b;
cout<<"Introduceti numarul cu care doriti sa vedeti daca se simplifica fractia : ";cin>>k;
if(a%k == 0 && b%k==0){
cout<<"Fractia se poate simplifica prin numarul "<<k;}
else{
cout<<"Fractia nu se poate simplifica prin numarul "<<k;}
getch();
}
