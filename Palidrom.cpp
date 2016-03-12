#include<iostream.h>
#include<conio.h>
#include<math.h>

main()

{
int numar, numarsalvat, numar2 = 0, i = 0, putere, min;

cout<<"Introduceti un numar: ";cin>>numar;
numarsalvat = numar;
do {
i++;
switch (i)
	case 5 :
   	goto end;
min = 4-i;
putere = pow(10, min);
numar2 = numar2 + (numar%10) * putere;
numar = numar / 10;

} while (1);
end:
if(numarsalvat==numar2){
cout<<"Numarul este palidrom!";
}
else
cout<<"Numarul nu este palidrom!";
getch();
}