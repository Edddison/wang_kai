
#include "RationalNumber.h"

RationalNumber::RationalNumber(double x, double y)
{
	if (y== 0||y<0)
		cout << "除数不能为0或负数：" << endl;
	else
	{
		m_x = x;
		m_y = y;


	}
	 change(*this);

}

RationalNumber& change(RationalNumber &num)
{
	int gcd = divisior(num.m_x,num.m_y);
	num.m_x /= gcd;
	num.m_y /= gcd;

	return num;

}

int divisior(int a, int b)
{
	int temp;
	while (b != 0)
	{
		temp = a%b;
		a = b;
		b = temp;
	}
	return a;
}


RationalNumber::~RationalNumber()
{
}

RationalNumber  RationalNumber::operator +(RationalNumber &num2)
{
	return RationalNumber(m_x*num2.m_y+num2.m_x+m_y,
		m_x*num2.m_y);

}

RationalNumber  RationalNumber::operator -(RationalNumber &num2)
{
	return RationalNumber(m_x*num2.m_y - num2.m_x * m_y,
		m_y*num2.m_y);

}

RationalNumber RationalNumber::operator *(RationalNumber &num2)
{
	return RationalNumber(m_x*num2.m_x,m_y*num2.m_y);
}

RationalNumber RationalNumber::operator /(RationalNumber &num2)
{
	return RationalNumber(m_x*num2.m_y,m_y*num2.m_x);
}




double RationalNumber::getNumber()
{
	return (m_x/m_y);
}
 ostream &operator<<(ostream &out, RationalNumber &num)
{
	//out << (num.m_x  num.m_y) + (m_x  m_y) << endl;
	 if (num.m_y == 1)
		 out << num.m_y << endl;
	 else
	 out << num.m_x << "/" << num.m_y<<endl;

	return out;
}

 bool RationalNumber::operator==(RationalNumber &num2)
 {
	 if (this->getNumber() == num2.getNumber())
		 return true;
	 else
		 return false;

