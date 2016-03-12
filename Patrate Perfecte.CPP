#include<iostream.h>
#include<conio.h>
#include<math.h>

main(){
unsigned long numar, patrat, i=1;
cout<<"introduceti un numar natural: ";cin>>numar;
numar = sqrt(numar);
while(i<=numar){
patrat=i*i;
i=i+1;
cout<<patrat<<endl;}
getch();
}