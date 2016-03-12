#include<iostream.h>
#include<conio.h>

eprim(long nr){
long v_ciclare;
bool raspuns = true;
for(v_ciclare=2; v_ciclare<=nr/2+1; v_ciclare++){
if(nr%v_ciclare == 0)raspuns = false;}
return raspuns;
}

main(){
long numar, prim=0;
long v_ciclare;
cout<<"Introduceti un numar mai mare decat 2: ";cin>>numar;
v_ciclare=numar;

/* Aflam cel mai mare numar prim mai mic decat numarul dat */

while(v_ciclare>2){
v_ciclare = v_ciclare - 1;
if(eprim(v_ciclare)==true){
prim = v_ciclare;
goto end1;}}
end1:
cout<<"Cel mai mare numar prim mai mic decat numarul dat este "<<prim<<endl;

/* Aflam cel mai mic numar prim mai mare decat numarul dat */

while(1){
v_ciclare = v_ciclare + 1;
if(eprim(v_ciclare)==true){
prim = v_ciclare;
goto end2;}}
end2:
cout<<"Cel mai mic numar prim mai mare decat numarul dat este "<<prim<<endl;

getch();
}
