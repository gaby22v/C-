#ifndef CARTE_H
#define CARTE_H
class carte
{
private:
	char *titlu,*editura;
	int tiraj,an;
public:
	carte();
	carte(char*,char*,int,int);
	~carte();
	carte(carte&);
	void afisare();
	void setTiraj();
	char *getEditura();
	inline char*getTitlu();
	friend int getAn(carte&);
};
carte::carte()
{
	titlu=new char[30];
	strcpy(titlu,"-");
	editura= new char[30];
	strcpy(editura,"-");
	tiraj=100;
	an=2000;
}
carte::carte(char *a,char *b,int c,int d)
{
	titlu=new char [strlen(a)+1];
	strcpy(titlu,a);
	editura=new char [strlen(b)+1];
	strcpy(editura,b);
	tiraj=c;
	an=d;
}
carte::~carte()
{
	delete titlu;
	delete editura;
}
carte::carte(carte&A)
{
	titlu=new char[strlen(A.titlu)+1];
	strcpy(titlu,A.titlu);
	editura=new char[strlen(A.editura)+1];
	strcpy(editura,A.editura);
	tiraj=A.tiraj;
	an=A.an;
}
void carte::afisare()
{
	cout<<"Titlu:"<<titlu<<endl;
	cout<<"Editura:"<<editura<<endl;
	cout<<"Tiraj:"<<tiraj<<endl;
	cout<<"An aparitie:"<<an<<endl;
}
void carte::setTiraj()
{
	int x;
	cout<<"x=";cin>>x;
	tiraj+=x;
}
char *carte::getEditura()
{
	return editura;
}
char *carte::getTitlu()
{
	return titlu;
}
int getAn(carte&A)
{
	return A.an;
}
#endif