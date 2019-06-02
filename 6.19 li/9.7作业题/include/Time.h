
#ifndef TIME_H
#define TIME_H
#include <iostream>
#include <iomanip>
#include <array>
using namespace std;
class Time
{
public:
	Time(int,int,int);
	~Time();
	void setTime(int,int,int);
	void printStandard();
	void tick();
private:
	int hour;
	int minute;
	int second;
};
#endif

