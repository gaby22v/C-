#ifndef TELEFON_HEADER_H
#define TELEFON_HEADER_H
class telefon
{
	char model[20],culoare[15];
	int pret,greutate;
public:
	telefon();
	telefon(char *,char*,int,int);
	~telefon();
	void afisare();
	void setPret(int);
	char* getCuloare();
};
telefon::telefon()
{
	strcpy(model,"LG");
	strcpy(culoare,"negru");
	pret=9000;
	greutate=150;
}
telefon::telefon(char *a,char *b,int c,int d)
{
	strcpy(model,a);
	strcpy(culoare,b);
	pret=c;
	greutate=d;
}
telefon::~telefon()
{
	cout<<"\nS-a distrus obiectul";
}
void telefon::afisare()
{
	cout<<"Model:"<<model<<endl;
	cout<<"Culoare:"<<culoare<<endl;
	cout<<"Pret:"<<pret<<endl;
	cout<<"Greutate:"<<greutate<<endl;
}
void telefon::setPret(int x)
{
	pret=x;
}
char* telefon::getCuloare()
{
	return culoare;
}
#endif