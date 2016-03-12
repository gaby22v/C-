#ifndef FLORI_HEADER_H
#define FLORI_HEADER_H
class flori:public plante
{
	protected:
	char culoare[15];
	int petale;
public:
	flori(char*,float,char*,int);
	~flori();
	void afisare();
	int getPetale();
};
flori::flori(char *s,float h,char *c,int n):plante(s,h)
{
	strcpy(culoare,c);
	petale=n;
	cout<<"Flori constructor"<<endl;
	
}
flori::~flori()
{
	cout<<"Destructor flori";
}
void flori::afisare()
{
	plante::afisare();
	cout<<"Culoare:"<<culoare<<endl;
	cout<<"Numar petale:"<<petale<<endl;
}
int flori::getPetale()
{
	return petale;
}
#endif