
#include <iostream>
using namespace std;
#include "RationalNumber.h"

int main()
{
	RationalNumber number1(8,10);
	cout << number1;
	RationalNumber number2(6, 10);

	RationalNumber number3(2,2);
	RationalNumber number4(1,1);

	cout << "����1������2���ڣ�\n";
	number3 = number1+number2;
	cout << number3<< endl;

	cout << "����1������2���ڣ�\n";
	number4 = number1 - number2;
	cout << number4 << endl;

	cout << "����1��������2���ڣ�\n";
	number4 = number1*number2;
	cout << number4 << endl;

	cout << "����2��������2���ڣ�\n";
	number4 = number1 / number2;
	cout << number4 << endl;

	//RationalNumber operator +(RationalNumber &num2);

	//boo1 operator==(RationalNumber &num2)

	if (number1 == number2)
		cout << "����1��������2\n" << endl;
	else
		cout << "����1����������2\n";

	return 0;

}
