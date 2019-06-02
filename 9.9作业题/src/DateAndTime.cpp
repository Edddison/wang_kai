#include "DateAndTime.h"


DateAndTime::DateAndTime(int year,int month,int day,
	int hour, int minute, int second)
	:m_second(0), m_minute(0), m_hour(0)
{
	setTime(hour,minute ,second);
	setDate(day,month,year);

}


DateAndTime::~DateAndTime()
{
}

void DateAndTime::setDate(int day,int month,int year)
{
	if (year > 0)
		m_year = year;
	if (month > 0 && month <= 12)
		m_month = month;
	if (checkDay(day))
		m_day = day;
}

bool DateAndTime::checkDay(int testDay)
{
	static array<int, 13> ArrayMonth = {31,28,31,30,31,30,31,31,
	30,31,30,31};


	if (m_month==2&&leafYear(m_year))
		return testDay<=29;
	else
		return testDay <= ArrayMonth[m_month - 1];
}

bool DateAndTime::leafYear(int yy)
{
	if (yy % 400 == 0 || (yy % 4 == 0 && yy % 100 != 0))
		return true;
	else
		return false;
}


void DateAndTime::setTime(int hour, int minute, int second)
{
	if (hour >= 0 && hour <24)
		m_hour = hour;
	if (minute >= 0 && minute < 60)
		m_minute = minute;
	if (second >= 0 && second < 60)
		m_second = second;
}

void DateAndTime::tick()
{
	if (m_second <59)
		++m_second;
	else if (m_minute <59)
	{
		++m_minute;
		m_second = 0;
	}
	else if (m_hour < 23)
	{
		++m_hour;
		m_minute = 0;
		m_second = 0;
	}
	else
	{
		nextDay();
		m_hour = 0;
		m_minute = 0;
		m_second = 0;
	}




}

void DateAndTime::nextDay()
{
	if (!endOfDay(m_day))
		++m_day;
	else if (m_month <= 12)
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

bool DateAndTime::endOfDay(int testDay )
{
	static array<int,12> ArrayMonth = { 31, 28, 31, 30, 31, 30, 31, 31,
		30, 31, 30, 31 };

	if (m_month == 2 && leafYear(m_year))
		return testDay == 29;
	else
		return testDay == ArrayMonth[m_month-1];



}

void DateAndTime::printUniversal()
{
	cout << setw(2) << setfill('0') << m_hour << ":" << setw(2) << setfill('0')
		<< m_minute << ":" << setw(2) << setfill('0') << m_second <<  endl;

		cout<<m_day << "/" << m_month << "/" << m_year << endl;
}

void DateAndTime::printStandard()
{
	cout << setw(2) << setfill('0') << ((m_hour % 12 == 0 && m_hour >= 12)
		? 12 : m_hour % 12) << ":" << setw(2) << setfill('0')
		<< m_minute << ":" << m_second << ' ' <<( (m_hour < 12) ? "AM" : "PM ")
		<< endl;

	cout << m_day << "/" << m_month << "/" << m_year << endl;
}

