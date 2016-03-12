#include<iostream.h>
#include<conio.h>
main(){
int a,b,c;
cout<<"Introduceti lungimea primei laturi: ";cin>>a;
cout<<"Introduceti lungimea celei de-a doua laturi: ";cin>>b;
cout<<"Introduceti lungimea celei de-a treia laturi: ";cin>>c;
if((a*a + b*b == c*c) || (a*a + c*c == b * b) || (b*b + c*c == a*a)){
goto da;}
else {
goto nu;}
da:
cout<<"Laturile pot forma un triunghi dreptunghic!";
goto end;
nu:
cout<<"Laturile nu pot forma un triunghi dreptunghic!";
end:
getch();
}