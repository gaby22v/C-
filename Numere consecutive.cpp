#include<iostream.h>
#include<conio.h>

main(){
int a,b;
cout<<"Introduceti primul numar: ";cin>>a;
cout<<"Introduceti al doilea numar: ";cin>>b;
if(a==b-1 || a==b+1)cout<<"Numerele sunt consecutive!";
else cout<<"Numerele nu sunt consecutive!";
getch();
}