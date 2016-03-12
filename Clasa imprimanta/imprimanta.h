#ifndef IMPRIMANTA_H
#define IMPRIMANTA_H
class imprimanta
{
private:
	char marca[30],tip[20];
	int ppm;
public:
	imprimanta();
	imprimanta(char*,char*,int);
	friend ostream& operator<<(ostream&,imprimanta&);
	friend istream& operator>>(istream&,imprimanta&);
};
imprimanta::imprimanta()
{
	strcpy(marca,"-");
	strcpy(tip,"-");
	ppm=0;
}
imprimanta::imprimanta(char *a,char *b,int c)
{
	strcpy(marca,a);
	strcpy(tip,b);
	ppm=c;
}
ostream& operator<<(ostream&iesire,imprimanta&a)
{
	iesire<<"marca:"<<a.marca<<endl;
	iesire<<"tip:"<<a.tip<<endl;
	iesire<<"ppm:"<<a.ppm<<endl;
return iesire;
}
istream& operator>>(istream&intrare,imprimanta&a)
{
	cout<<"Marca=";intrare>>a.marca;
	cout<<endl;
	cout<<"tip=";intrare>>a.tip;
	cout<<endl;
	cout<<"ppm=";intrare>>a.ppm;
	cout<<endl;
return intrare;
}
#endif