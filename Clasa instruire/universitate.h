#ifndef UNIVERSITATE_H
#define UNIVERSITATE_H
class universitate: public institutie
{
private:
char denumire[30];
int nrstud, nrang, nrfacultati;
public:
  universitate(char *, int , char *, char *, int, int, int);
  ~universitate();
  void afisare();
  //int getAn();
  void setStudenti();
  friend char * getDenumire(universitate &);
  int getStudenti()
  {
    return nrstud;
  }
};
 
universitate::universitate(char *T, int A, char *D, char *Den,int Nrs,
 int Nra, int Nrf):institutie(T,A,D)
{
  strcpy(denumire,Den);
  nrstud=Nrs;
  nrang=Nra;
  nrfacultati=Nrf;
};
 
universitate::~universitate()
{
  cout<<"\nI'm the DESTRUCTOR";
}
 
void universitate::afisare()
{
  institutie::afisare();
  cout<<"\nDen.Univ. "<<denumire<<"\tNr.Stud. "<<nrstud<<"\tNr.Angj. "<<
nrang<<"\tNr.Fac. "<<nrfacultati;
}
 
int institutie::getAn()
{
return an;
}
 
void universitate::setStudenti()
{
int x;
cout<<"\nNr. stud. inscrisi. ";
cin>>x;
nrstud=x;
}
 
char * getDenumire(universitate&A)
{
return A.denumire;
}
#endif