#include "Date.h"
Date::Date(int day,int month,int year)
{
	setDate(day,month,year);
}


Date::~Date()
{
}

void Date::setDate(int day, int month, int year)
{
	static array<int, 12> ArrayMonth =
	{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (year > 0)
		m_year = year;
	if (month > 0 && month <= 12)
		m_month = month;
	if (day > 0 && day < ArrayMonth[month])
		m_day = day;
	if (month == 2 && leafYear(year) && day <= 29)
		m_day = day;
}

bool Date::leafYear(int yy)
{
	if (yy % 400 == 0 && yy % 100 != 0 || yy % 400 == 0)
		return true;
	return false;
}

void Date::nextday()
{
	if (!endOfDay(m_day,m_month,m_year))
		++m_day;
	else if(m_month < 12)
	{
		++m_month;
		m_day = 1;
	}
	else
	{
		++m_year;
		m_month = 1;
		m_day = 1;
	}

}

bool Date::endOfDay(int dd, int mm,int yy)
{
	static array<int, 12> ArrayMonth =
	{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (dd > 0 && dd < ArrayMonth[mm])
		return false;
	if (mm == 2 && leafYear(yy) && dd <= 29)
		return false;
	return true;
}

void Date::displayMessage()
{
	cout << "当前日期为：" << m_month << "/" << m_day << "/" << m_year
		<< endl;
}


