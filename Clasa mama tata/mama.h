#ifndef MAMA_H
#define MAMA_H
class mama
{
protected:
  int dim;
  char culoare[20];
public:
  mama(int, char *);
  ~mama();
  void print();
  void setDim(int);
};
mama::mama(int D,char *C)
{
  dim=D;
  strcpy(culoare,C);
}
 
mama::~mama()
{
  cout<<"\nI'm the mother destructor";
}
 
void mama::print()
{
  cout<<"\nLungimea Parului: "<<dim<<"\tCuloarea: "<<culoare;
}
 
void mama::setDim(int D)
{
  dim=D;
}
 

#endif