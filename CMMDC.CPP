#include<iostream.h>
#include<conio.h>

cmmdc(int n1, int n2){
int i = n1, cmmdc;
if(n1 > n2)i=n2;
while(i>=1){
if (n1 % i == 0 && n2 % i == 0){
cmmdc = i;
goto end;}
i=i-1;}
end:
return cmmdc;
}

main(){
int n, v_cmmdc, numar, i=2;
cout<<"Introuceti numarul de valori care vor fi citite: ";cin>>n;
cout<<"Introduceti numarul #1 ";cin>>v_cmmdc;
while(i<=n){
i=i+1;
cout<<"Introduceti numarul #"<<(i-1)<<" ";cin>>numar;
v_cmmdc = cmmdc(v_cmmdc, numar);
}
cout<<"Cel mai mare divizor al numerelor introduse este "<<v_cmmdc;
getch();
}