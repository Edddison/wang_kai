#include "Complex.h"


Complex::Complex(double realPart, double imaginaryPart) :real(realPart),
imaginary(imaginaryPart)
{

}


Complex::~Complex()
{
}

Complex Complex::operator+(const Complex &operand2) const
{
	return Complex(real + operand2.real,imaginary+
		operand2.imaginary);
}

Complex Complex::operator-(const Complex &operand2) const
{
	return Complex(real-operand2.real,imaginary+operand2.imaginary);
}

void Complex::print() const
{
	cout << "(" << real << "," << imaginary << ")";
}

ostream &operator<<(ostream &out, Complex &fx)
{
	if (fx.imaginary == 0)
		cout << fx.real;
	else
	out << fx.real << "+"<<fx.imaginary<<"i"<<endl;

	return out;
}

//x.operator *(Complex &y);
Complex Complex::operator*(const  Complex &fx)
{
	return Complex(real*fx.real,imaginary*fx.imaginary);

}

bool Complex::operator ==(Complex &fx)
{
	if (real == fx.real&&imaginary == fx.imaginary)
		return true;
	else
		return false;
}

Complex &Complex::operator =(Complex &fx)
{
	real = fx.real;
	imaginary = fx.imaginary;
	return *this;

