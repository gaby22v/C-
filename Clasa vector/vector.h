#ifndef VECTOR_H
#define VECTOR_H
class vector
{
  int dim,v[30];
public:
  vector();
  vector(int);
  void print();
  int getDim();
  friend vector operator + (vector &,vector &);
  void extragere(vector &,int);
  void insert(vector &,int,int);
  int max(vector &);
};
 
vector::vector()
{
  dim=5;
  for(int i=1;i<=dim;i++)
    v[i]=i;
}
 
vector::vector(int D)
{ int i=1;
  dim=D;
  for (i;i<=dim;i++)
  {
    cout<<"\nV["<<i<<"]";
    cin>>v[i];
  }
}
 
void vector::print()
{
  for(int i=1;i<=dim;i++)
    cout<<"\nV["<<i<<"]= "<<v[i];
}
 
int vector::getDim()
{
  return dim;
}
 
vector& operator + (vector &A,vector &B)
{
  vector C;
  if (A.dim!=B.dim)
    cout<<"\n IMPOSSIBLE";
  else
    {
    for(int i=1;i<=A.dim;i++)
      C.v[i]=A.v[i]+B.v[i];
    for(i=1;i<=A.dim;i++)
      cout<<"\nV["<<i<<"]= "<<C.v[i];
    }
  return C;
}
 
void vector::extragere(vector &V,int x)
{ int i,j;
  for(i=1;i<=V.dim;i++)
    if (V.v[i]==x)
    {
      for (j=i;j<=V.dim;j++)
 V.v[j]=V.v[j+1];
      V.dim=V.dim-1;
    }
}
 
void vector::insert(vector &V,int D,int x)
{
  for (int i=1;i<=V.dim;i++)
    if (i==D)
    {
      V.dim++;
      for (int j=V.dim;j>=i;j--)
 V.v[j]=V.v[j-1];
    V.v[i]=x;
    }
}
 
int vector::max(vector &V)
{ int max=-32800;
  for (int i=1;i<=V.dim;i++)
    if(V.v[i]>max)
      max=V.v[i];
return max;
}
#endif