#ifndef PLANTE_HEADER_H
#define PLANTE_HEADER_H
class plante
{
protected:
	char specia[20];
	float inaltime;
public:
	plante(char *,float);
	~plante();
	void afisare();
	void setInaltime(float);
};
plante::plante(char*s,float h)
{
	strcpy(specia,s);
	inaltime=h;
	cout<<"Plante constructor"<<endl;
}
plante::~plante()
{
	cout<<"Destructor plante"<<endl;
}
void plante::afisare()
{
	cout<<"Specia:"<<specia<<endl;
	cout<<"Inaltime:"<<inaltime<<endl;
}
void plante::setInaltime(float h)
{
	inaltime=h;
}
#endif