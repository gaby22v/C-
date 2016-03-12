#ifndef INDIVID_H
#define INDIVID_H
class individ
{
private:
  int greutate,varsta;
  float inaltime;
public:
  individ();
  individ(int,int,float);
  void afisare();
};
individ::individ()
{
  greutate=70;
  varsta=50;
  inaltime=1.70;
}
 
individ::individ(int g,int v,float h)
{
  greutate=g;
  varsta=v;
  inaltime=h;
}
 
void individ::afisare()
{
  cout<<"\nG: "<<greutate<<"\tV: "<<varsta<<"\tH: "<<inaltime;
}
#endif