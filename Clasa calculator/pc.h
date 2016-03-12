#ifndef PC_H
#define PC_H
class pc
{
private:
	char procesor[15],video[15];
	int memoria,hdd;
public:
	pc();
	pc(char*,char*,int,int);
	~pc();
	void afisare();
	int getMemoria();
	void setProcesor(char*);
	friend int suma(int,int);
};
pc::pc()
{
	strcpy(procesor,"-");
	strcpy(video,"-");
	memoria=50;
	hdd=50;
}
pc::pc(char *c,char *d,int a,int b)
{
	memoria=a;
	hdd=b;
	strcpy(procesor,c);
	strcpy(video,d);
}
pc::~pc()
{
	cout<<"S-a apelat destructorul"<<endl;
}
void pc::afisare()
{
	cout<<"Memorie:"<<memoria<<endl;
	cout<<"Video:"<<video<<endl;
	cout<<"HDD:"<<hdd<<endl;
	cout<<"Procesor:"<<procesor<<endl;
}
int pc::getMemoria()
{
	return memoria;
}
void pc::setProcesor(char *a)
{
	strcpy(procesor,a);
}
int suma(int hdd1,int hdd2)
{
	return hdd1+hdd2;
}
#endif