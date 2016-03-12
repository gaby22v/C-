#ifndef ANGAJAT_H
#define ANGAJAT_H
class angajat
{
  char *dep,*fct;
  int vechime;
  float salariu;
public:
  angajat();
  angajat(char *,char *,int,float);
  angajat(angajat&);
  ~angajat();
  void afisare();
  int getVechime();
  void setSalariu(float);
  int getSalariu();
  inline char *getDepartament();
  friend void setVechime(angajat &);
private:
  static int nrAngajati;
public:
  static int getNrAngajati();
};
 
int angajat::nrAngajati=0;
int angajat::getNrAngajati()
{
  return nrAngajati;
}
 
 
 
angajat::angajat()
{
dep=new char[12];
strcpy(dep,"Informatica");
fct=new char[12];
strcpy(fct,"Master.IT");
vechime=5;
salariu=1000;
nrAngajati++;
}
 
angajat::angajat(char *d,char *f, int v, float s)
{
dep=new char[strlen(d)+1];
strcpy(dep,d);
fct=new char[strlen(f)+1];
strcpy(fct,f);
vechime=v;
salariu=s;
nrAngajati++;
}
 
angajat::angajat(angajat&A)
{
dep=new char[strlen(A.dep)+1];
strcpy(dep, A.dep);
fct=new char[strlen(A.fct)+1];
strcpy(fct, A.fct);
vechime=A.vechime;
salariu=A.salariu;
nrAngajati++;
}
 
angajat::~angajat()
{
delete dep;
delete fct;
nrAngajati--;
}
 
void angajat::afisare()
{
cout<<"\nDep:"<<dep<<"\tFct: "<<fct<<"\tVechime: "<<vechime
<<"\tSalariu: "<<salariu;
}
 
int angajat::getVechime()
{
return vechime;
}
 
int angajat::getSalariu()
{
return salariu;
}
 
void angajat::setSalariu(float x)
{
salariu=x;
}
 
char * angajat::getDepartament()
{
return dep;
}
 
void setVechime(angajat &A)
{  int x;
cout<<"\nVechime: ";
cin>>x;
A.vechime=x;
}
#endif