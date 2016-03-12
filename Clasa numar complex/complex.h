#ifndef COMPLEX_H
#define COMPLEX_H
class complex
{
	int real,im;
public:
	complex();
	complex(int,int);
	complex(complex&);
	void afisare();
	int getReal();
	int getIm();
	complex suma(complex);
	complex scadere(complex);
	friend complex produs(complex&,complex);
	friend complex conjugat(complex&);
	double modul();
};
complex::complex()
{
	real=0;
	im=0;
}
complex::complex(int a,int b)
{
	real=a;
	im=b;
}
complex::complex(complex&A)
{
	real=A.real;
	im=A.im;
}
void complex::afisare()
{
	if(this->im<0)
		cout<<real<<im<<"*i";
	else
		cout<<real<<"+"<<im<<"*i";
}
int complex::getReal()
{
	return this->real;
}
int complex::getIm()
{
	return this->im;
}
complex complex::suma(complex A)
{
	complex B;
	B.real=this->real+A.real;
	B.im=this->im+A.im;
	return B;
}

complex complex::scadere(complex A)
{
	complex B;
	B.real=this->real-A.real;
	B.im=this->im-A.im;
	return B;
}
complex produs(complex &A,complex &B)
{
	complex C;
	C.real=A.real*B.real-A.im*B.im;
	C.im=A.real*B.im-A.im*B.real;
	return C;
}
complex conjugat(complex A)
{
	return complex(A.real-A.im);
}
double complex::modul()
{
	return sqrt(this->real*this->real+this->im*this->im);
}
#endif