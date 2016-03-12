#ifndef FRACTIE_H
#define FRACTIE_H
class fractie
{
private:
	int numitor,numarator;
public:
	fractie();
	void setFractie();
	int getNumitor();
	int getNumarator();
	void afisare();
	fractie operator+(fractie&);
	fractie operator-(fractie&);
	friend fractie operator*(fractie&,fractie&);
	friend fractie operator/(fractie&,fractie&);
};
fractie::fractie()
{
	numarator=0;
	numitor=1;
}
void fractie::setFractie()
{
	cout<<"numarator=";cin>>numarator;
	cout<<"numitor=";cin>>numitor;
}
int fractie::getNumarator()
{
	return numarator;
}
int fractie::getNumitor()
{
	return numitor;
}
void fractie::afisare()
{
	cout<<numarator<<"/"<<numitor;
	cout<<endl;
}
fractie fractie::operator+(fractie&f)
{
	fractie r;
	r.numarator=this->numarator*f.numitor+this->numitor*f.numarator;
	r.numitor=this->numitor*f.numitor;
	return r;
}
fractie fractie::operator-(fractie&f)
{
	fractie r;
	r.numarator=this->numarator*f.numitor-this->numitor*f.numarator;
	r.numitor=this->numitor*f.numitor;
	return r;
}
fractie operator*(fractie *f1,fractie *f2)
{
	fractie r;
	r.numarator=f1.numarator*f2.numarator;
	r.numitor=f1.numitor*f2.numitor;
	return r;
}
fractie operator/(fractie *f1,fractie *f2)
{
	fractie r;
	r.numarator=f1.numarator*f2.numitor;
	r.numitor=f2.numitor*f2.numarator;
	return r;
}
#endif