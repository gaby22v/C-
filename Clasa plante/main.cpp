/*sa se implemnteze clasa plante:
date membru:specie,inaltime
functii membru:constructor cu paramentru,afisare,destructor,functie care seteaza inaltimea
Din clasa plante se va deriva clasa flori:
date memmbru:culoare si numar petale
functii membru:constructor cu paramentru,afisare,destructor,functie ce returneaza numarul de petale
clasa Flori de apartament
date membru:tip
functii:contructor cu paramentru,destructor,afisare,redefinirea op << si >>*/
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include"plante_header.h"
#include"flori_header.h"
#include"floriap_header.h"

int main()
{
	plante A("trandafir",1.5);
	flori B("orhidee",1.5,"alb",5);
	floriap C("muscata",0.3,"rosu",20,"mica",5);
	floriap D("-",0,"-",0,"-",0);
	A.afisare();
	B.afisare();
	C.afisare();
	cout<<C;
	cin>>D;
	D.afisare();
	getch();
}
