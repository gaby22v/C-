#include<iostream.h>
#include<conio.h>

main(){
int numar, v_iesire=0;
while(1){
cout<<"Introduceti un numar: ";cin>>numar;
if(numar==-1)goto end;
if(numar>=0){
while(numar > 0){if(numar%10==0)v_iesire=v_iesire+1;numar=numar/10;}
}}
end:
cout<<"Numarul de zerouri aparute in sirul de numere introdus esre "<<v_iesire;
getch();
}
