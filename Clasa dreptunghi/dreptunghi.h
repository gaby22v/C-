#ifndef DREPTUNGHI_H
#define DREPTUNGHI_H
class drept
{
	int l,L;
public:
	drept();
	drept(int,int);
	~drept();
	void afisare();
	void setLungime(int);
	int getLatime();
	inline int perimetru();
	int aria(){return l*L;}
};
drept::drept()
{
	l=0;
	L=0;
}
drept::drept(int a,int b)
{
	l=a;
	L=b;
}
drept::~drept()
{
	cout<<"\nS-a distrus";
}
void drept::afisare()
{
	cout<<"\n Latime:"<<l;
	cout<<"\n Lungime:"<<L;
}
void drept::setLungime(int a)
{
	L=a;
}
int drept::getLatime()
{
	return l;
}
int drept::perimetru()
{
	return l*l+L*L;
}
#endif