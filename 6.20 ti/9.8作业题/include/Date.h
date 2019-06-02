
#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <array>
using namespace std;

class Date
{


public:
	explicit Date(int,int,int);
	~Date();

	void setDate(int, int, int);

	void nextday();
	bool endOfDay(int,int,int);
	bool leafYear(int);

	void displayMessage();

private:


	int m_year;
	int m_month;
	int m_day;

};
#endif
