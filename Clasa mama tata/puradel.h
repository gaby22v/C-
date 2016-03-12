#ifndef PURADEL_H
#define PURADEL_H
#include "mama.h"
#include "tata.h"
class puradel:mama, tata
{
  int varsta;
  float inaltime;
public:
  puradel(int,char *,char *,char *,int,int,float);
  ~puradel();
  void print();
  friend ostream& operator << (ostream &,puradel &);
};
  puradel::puradel(int D,char *C,char *N,char *c,int B,int V,float H):mama(D,C),tata(N,c,B)
{
  dim=D;
  strcpy(culoare,C);
  strcpy(nume,N);
  strcpy(cul,c);
  barba=B;
  varsta=V;
  inaltime=H;
}
 
puradel::~puradel()
{
  cout<<"\nI'm the puradel destructor";
}
 
void puradel::print()
{
  mama::print();
  tata::print();
  cout<<"\nVarsta Puradelului: "<<varsta<<"\tInaltimea: "<<inaltime;
}
 
ostream& operator << (ostream &out,puradel &P)
{
  out<<"\nVarsta "<<P.varsta<<"\tInaltime: "<<P.inaltime;
return out;
}
#endif