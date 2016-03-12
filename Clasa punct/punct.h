#ifndef PUNCT_H
#define PUNCT_H
class punct
{
  int x,y,z;
public:
  punct();
  punct(int X,int Y,int Z);
  punct(punct &);
  ~punct();
  void print();
  void setX(int);
  int getZ()
  {
    return z;
  }
  friend punct operator + (punct &,punct &);
  friend punct operator - (punct &,punct &);
  friend ostream& operator << (ostream &,punct &);
  friend istream& operator >> (istream &,punct &);
};
 

punct::punct()
{
  x=2;
  y=3;
  z=5;
}
 
punct::punct(int X,int Y,int Z)
{
  x=X;
  y=Y;
  z=Z;
}
 
punct::punct(punct &A)
{
  x=A.x;
  y=A.y;
  z=A.z;
}
 
punct::~punct()
{
cout<<"\nI'm the destructor";
}
 
void punct::print()
{
  cout<<"\nx= "<<x<<"\ty= "<<y<<"\tz= "<<z<<"\n";
}
 
void punct::setX(int x)
{
  x=x;
}
 
punct operator + (punct &A,punct &B)
{
  punct C;
  C.x=A.x+B.x;
  C.y=A.y+B.y;
  C.z=A.z+B.z;
return C;
}
 
punct operator - (punct &A,punct &B)
{
  punct C;
  C.x=A.x-B.x;
  C.y=A.y-B.y;
  C.z=A.z-B.z;
return C;
}
 
ostream& operator << (ostream &out,punct &A)
{
  out<<"\nx= "<<A.x<<"\ty= "<<A.y<<"\tz= "<<A.z<<"\n";
return out;
}
 
istream& operator >> (istream &in,punct &A)
{
  cout<<"\nx= ";
  in>>A.x;
  cout<<"\ny= ";
  in>>A.y;
  cout<<"\nz= ";
  in>>A.z;
return in;
}
#endif