
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

	cout << "数字1加数字2等于：\n";
	number3 = number1+number2;
	cout << number3<< endl;

	cout << "数字1减数字2等于：\n";
	number4 = number1 - number2;
	cout << number4 << endl;

	cout << "数字1乘以数字2等于：\n";
	number4 = number1*number2;
	cout << number4 << endl;

	cout << "数字2除以数字2等于：\n";
	number4 = number1 / number2;
	cout << number4 << endl;

	//RationalNumber operator +(RationalNumber &num2);

	//boo1 operator==(RationalNumber &num2)

	if (number1 == number2)
		cout << "数字1等于数字2\n" << endl;
	else
		cout << "数字1不等于数字2\n";

	return 0;

}
