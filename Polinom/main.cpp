#include<iostream.h>
#include<conio.h>
class polinom
{
private:
	int coef[50];
	int pow;
public:
	polinom()
	{
		int i;
		for(i=0;i<50;i++)
		{
			coef[i]=0;
		}
	}
	void set(int a,int b)
	{
		coef[b]=a;
		pow=power();
	}
	int power()
	{
		int d=0,i;
		for(i=0;i<50;i++)
			if(coef[i]!=0)
				d=i;
			return d;
	}
	void print()
	{
		int i;
		for(i=49;i>=0;i--)
		{
			if(coef[i]!=0)
			{
				cout<<coef[i]<<"x^"<<i<<" ";
			}
		}
	}
	int evaluate(int x)
	{
		int p=0,i;
		for(i=pow;i>=0;i--)
			p=coef[i]+(x*p);
		return p;
	}
	polinom plus(polinom b)
	{
		polinom a=*this;
		polinom c;
		int i;
		for(i=0;i<=a.pow;i++)
			c.coef[i]+=a.coef[i];
		for(i=0;i<=b.pow;i++)
			c.coef[i]+=b.coef[i];
		c.pow=c.power();
		return c;
	}
	polinom mul(polinom b)
	{
		polinom a=*this;
		polinom c;
		int i,j;
		for(i=0;i<=a.pow;i++)
			for(j=0;j<=b.pow;j++)
				c.coef[i+j]+=(a.coef[i]*b.coef[j]);
			c.pow=c.power();
			return c;
	}
};
int main()
{
	polinom a,b,c,d;
	a.set(1,4);
	a.set(2,3);
	a.set(1,2);
	a.set(3,1);
	a.set(2,0);
	b.set(6,3);
	b.set(-3,2);
	c=a.mul(b);
	c=a.plus(b);
	c.print();
	cout<<endl;
	cout<<a.evaluate(2);
	getch();
}