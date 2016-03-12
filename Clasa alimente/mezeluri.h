#ifndef MEZELURI_H
#define MEZELURI_h
class mezeluri: public alimente
{
private:
  float g,p;
public:
  mezeluri();
  mezeluri(char *,char *, char *,float, float);
  ~mezeluri()
  {
    cout<<"\nI'm the MEZEL destructor\n";
  }
  void afisareB();
  friend ostream& operator << (ostream &,mezeluri &);
};
mezeluri::mezeluri()
{
  g=10;
  p=10;
}
 
mezeluri::mezeluri(char *P,char *D,char *E,float G,float Pr):alimente(P,D,E)
{
  g=G;
  p=Pr;
}
 
void mezeluri::afisareB()
{
  cout<<"\n\tAfisare Mezel:"<<"\nGreutate "<<g<<"\tPret "<<p;
}
 
ostream& operator << (ostream &out,mezeluri &A)
{
  out<<"\nGreutate= "<<A.g<<"\tPret= "<<A.p;
return out;
}
 
#endif