#ifndef DATEANDTIME_H
#define DATEANDTIME_H
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <array>
using namespace std;
class DateAndTime
{
public:
	DateAndTime(int,int ,int,int,int,int);
	~DateAndTime();

	void tick();
	void nextDay();
	void setTime(int,int,int);
	void setDate(int,int,int);
	void printStandard();
	void printUniversal();
	bool checkDay(int );

	bool leafYear(int);
	bool endOfDay(int);


private:
	int m_year;
	int m_month;
	int m_day;
	int m_hour;
	int m_minute;
	int m_second;

};
#endif

