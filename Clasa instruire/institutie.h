#ifndef INSTITUTIE_H
#define INSTITUTIE_H
class institutie
{
private:
  char tip[20];
  int an;
  char domeniu[30];
public:
  institutie();
  institutie(char *,int, char *);
  ~institutie();
  void afisare();
  char *getTip();
  int getAn();
};
 
institutie::institutie()
{
  strcpy(tip," ");
  an=2000;
  strcpy(domeniu," ");
}
 
institutie::institutie(char *T, int A, char *D)
{
strcpy(tip,T);
an=A;
strcpy(domeniu,D);
}
 
institutie::~institutie()
{
cout<<"\N I'm the DESTRUCTOR";
}
 
void institutie::afisare()
{
  cout<<"\nTip: "<<tip<<"\tAn Constr. "<<an<<"\tDomeniu: "<<domeniu;
}
 
char * institutie::getTip()
{
return this->tip;
}
#endif