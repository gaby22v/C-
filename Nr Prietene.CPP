#include<iostream.h>
#include<conio.h>

suma_div(int numar){
int s_div=0,i=0;
while(i<=numar/2+1){
i=i+1;
if(numar%i==0)s_div=s_div + i;
}
return s_div;
}

main(){
int numar1, numar2, i=1, vmax=0;
while(vmax<3){
numar2 = i;
numar1 = suma_div(numar2);
if(numar2 == suma_div(numar1)){
cout<<"("<<numar1<<","<<numar2<<")"<<endl;
vmax=vmax+1;}
i=i+1;
}
getch();
}