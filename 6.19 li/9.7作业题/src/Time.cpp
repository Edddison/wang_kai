#include "Time.h"


Time::Time(int hh,int min,int sec)
{
	setTime(hh,min,sec);
}


Time::~Time()
{
}

void Time::setTime(int hh, int min, int sec)
{
	if (hh >= 0 && hh <24)
		hour = hh;
	if (min >= 0 && min < 60)
		minute = min;
	if (sec >= 0 && sec < 60)
		second = sec;
}

void Time::printStandard()
{
	cout <<setw(2)<<setfill('0')<<(( hour % 12==0 && hour>=12) ? 12:hour%12)<< ":" <<setw(2)<<setfill('0')<< minute << ":" <<setw(2)<<setfill('0')<< second << ' '
		<<((hour>=12) ? "PM":"AM")<<endl;

}

void Time::tick()
{
	if (second < 59)
		++second;
	else if (minute < 59)
	{
		++minute;
		second = 0;
	}
	else if (hour < 24)
	{
		++hour;
		minute = 0;
		second = 0;
	}
	else
	{
		hour = 0;
		minute = 0;
		second = 0;
	}


}
