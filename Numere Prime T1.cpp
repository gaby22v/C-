#include<iostream.h>
#include<conio.h>

eprim(long nr){
long v_ciclare;
bool raspuns = true;
for(v_ciclare=2; v_ciclare<=nr/2+1; v_ciclare++){
if(nr%v_ciclare == 0)raspuns = false;}
return raspuns;
}

main()
{
int n, nr, i, total = 0;
cout<<"Introduceti numarul de numere: ";cin>>n;
for(i=1;i<=n;i++)
	{
   cout<<"Introduceti un numar: ";cin>>nr;
   if(eprim(nr)==true)total++;
   }
if(eprim(total)==true)cout<<"Numarul de numere prime este "<<total<<" si este un numar prim!";
else cout<<"Numarul de numere prime este "<<total<<" si este un numar prim!";
getch();
}
