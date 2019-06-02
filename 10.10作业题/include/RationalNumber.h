#ifndef RATIONALNUMBER
#define RATIONALNUMBER
#include <iostream>
#include <string>
#include <cmath>
#include <stdexcept>
using namespace std;
class RationalNumber
{
	friend ostream &operator<<(ostream &out, RationalNumber &num);
	friend RationalNumber& change(RationalNumber &num);
	friend int divisior(int a, int b);
public:
	RationalNumber(double , double=1);
	~RationalNumber();
    RationalNumber operator +(RationalNumber &num2);
	RationalNumber operator -(RationalNumber &num2);
	RationalNumber operator *(RationalNumber &num2);
	RationalNumber operator /(RationalNumber &num2);
    bool  operator==(RationalNumber &num2);


	double getNumber();






private:
	double m_x;
	double m_y;
};
#endif

