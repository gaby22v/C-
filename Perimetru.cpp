#include<iostream.h>
#include<conio.h>
#include<math.h>
main(){
float a,b,c, arie, semip;
cout<<"Introduceti lungimea primei laturi: ";cin>>a;
cout<<"Introduceti lungimea celei de-a doua laturi: ";cin>>b;
cout<<"Introduceti lungimea celei de-a treia laturi: ";cin>>c;
semip = (a+b+c)/2;
arie = sqrt(semip * (semip - a) * (semip - b) * (semip - c));
cout<<"Aria triunghiului este: "<<arie<<" iar perimetrul este "<<semip * 2;
getch();
}
