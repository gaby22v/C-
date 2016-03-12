#include<iostream.h>
#include<conio.h>
int main()
{ 
	int n,x,p=1;
 cout<<"n="; cin>>n;
 while(n!=0)
 { 
	 x=n%10;
 p=p*x;
 n=n/10;
 }
 if(p%2!=0)
	 cout<<"Este impar";
 else
	 cout<<"Este par";
 cout<<endl;
 cout<<"Produsul cifrelor este: "<<p;
 getch(); 
}