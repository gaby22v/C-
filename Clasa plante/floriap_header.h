#ifndef FLORIAP_HEADER_H
#define FLORIAP_HEADER_H
class floriap:public flori
{
private:
	char tip[20];
	int varsta;
public:
	floriap(char *,float,char*,int,char*,int);
	~floriap();
	void afisare();
	friend ostream& operator<<(ostream&,floriap&);
	friend istream& operator>>(istream&,floriap&);
};


floriap::floriap(char *s,float h,char*c,int n,char* t,int v):flori(c,n,t,v)
{
	strcpy(tip,t);
	varsta=v;
	cout<<"Constructor floriap";
}
floriap::~floriap()
{
	cout<<"Destrctor floriap";
}
 void floriap::afisare()
{
	flori::afisare();
	cout<<"Tip:"<<tip<<endl;
	cout<<"Varsta:"<<varsta<<endl;
}
ostream& operator<< (ostream &out,floriap&A)
{
	out<<"Specia:"<<A.specia<<endl;
	out<<"Inaltime:"<<A.inaltime<<endl;
	out<<"Culoare:"<<A.culoare<<endl;
	out<<"Numar petale:"<<A.petale<<endl;
	out<<"Tip:"<<A.tip<<endl;
	out<<"Varsta:"<<A.varsta<<endl;
return out;
}
istream& operator>>(istream&in,floriap&B)
{
	cout<<"Specia:";in>>B.specia;
	cout<<endl;
	cout<<"Inaltime:";in>>B.inaltime;
	cout<<endl;
	cout<<"Culoare:";in>>B.culoare;
	cout<<endl;
	cout<<"Numar petale:";in>>B.petale;
	cout<<endl;
	cout<<"Tip:";in>>B.tip;
	cout<<endl;
	cout<<"Varsta:";in>>B.varsta;
	cout<<endl;
	return in;
}
#endif