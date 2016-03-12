#ifndef PACIENT_H
#define PACIENT_H
class pacient: public individ
{
private:
  char nume[20],sang[5],diagnostic[20],asigurare[20];
  int zile;
public:
  pacient(int, int, float,char *,char *, char *, char *, int);
  void afisarep();
  char * getNume()
    {
    return nume;
    }
  char * getGrupa()
    {
    return sang;
    }
  char * getDiag()
    {
    return diagnostic;
    }
  char * getAsig()
    {
    return asigurare;
    }
  int getZile()
    {
    return zile;
    }
  friend void invalid(pacient &);
  friend void Extracharge(pacient &);
  void mesaj(pacient &);
};
pacient::pacient(int g,int v,float h,char *N,char *S,char *D,char *A,int Z)
:individ(g,v,h)
{
  strcpy(nume,N);
  strcpy(sang,S);
  strcpy(diagnostic,D);
  strcpy(asigurare,A);
  zile=Z;
}
 
void pacient::afisarep()
{
  individ::afisare();
  cout<<"\nName: "<<nume<<"\tSang: "<<sang
  <<"\tDiag: "<<diagnostic<<"\tAsig: "<<asigurare<<"\tZile: "<<zile;
}
 
void invalid(pacient &P)
{
  if ((strcmp(P.getDiag(),"diabet")==0)||(strcmp(P.getDiag(),"TBC")==0))
    cout<<"\n"<<P.nume<<" e invalid sporit";
  else
    cout<<"\n"<<P.nume<<" e NeInvalid";
}
 
void Extracharge(pacient &P)
{
  if ((P.getZile()>=5)&&(strcmp(P.asigurare,"neasigurat")==0))
    cout<<"\n"<<P.nume<<" it's Extracharged";
  else
    cout<<"\n"<<P.nume<<" nu plateste in plus";
}
 
#endif