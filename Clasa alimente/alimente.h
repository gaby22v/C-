#ifndef ALIMENTE_H
#define ALIMENTE_H
class alimente
{
protected:
  char prod[20],den[20],exp[12];
public:
  alimente();
  alimente(char *,char *,char *);
  void afisareA();
  ~alimente()
  {
    cout<<"\nI'm the ALIMENT destructor\n";
  }
  void setData();
};
alimente::alimente()
{
strcpy(prod,"CarnSan");
strcpy(den,"Parizer");
strcpy(exp,"25-11-2013");
}
 
alimente::alimente(char *P,char *D,char *E)
{
  strcpy(prod,P);
  strcpy(den,D);
  strcpy(exp,E);
}
 
void alimente::afisareA()
{
  cout<<"\nProd: "<<prod<<"\tDen: "<<den<<"\tExp: "<<exp;
}
 
void alimente::setData()
{ char *D;
  cout<<"\nData Expirarii: \n";
  cin>>D;
  strcpy(D,exp);
}
 
#endif