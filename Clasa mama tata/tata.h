#ifndef TATA_H
#define TATA_H
class tata
{
protected:
  char nume[20],cul[20];
  int barba;
public:
  tata(char *,char *,int);
  ~tata();
  void print();
  char* getCul();
};
tata::tata(char *N,char *c,int B)
{
  strcpy(nume,N);
  strcpy(cul,c);
  barba=B;
}
tata::~tata()
{
  cout<<"\nI'm the father destructor";
}
 
void tata::print()
{
  cout<<"\nNume: "<<nume<<"\tCuloare: "<<cul<<"\tHave beard?: "<<barba;
}
 
char* tata::getCul()
{
  return cul;
}
#endif