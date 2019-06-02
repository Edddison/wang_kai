#define _CRT_SECURE_NO_WARNINGS
#include "Time.h"

int main()
{

	//获取当前时间
	time_t rawtime;
	struct tm *timeinfo;

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	cout << "Current local time and date:" << asctime(timeinfo);


	//增强的Time类，可以用来自time函数和localtime函数的当前时间初始化Time类的对象
	Time date1;
	date1.setTime(timeinfo->tm_hour,timeinfo->tm_min ,timeinfo->tm_sec);
	date1.printUniversal();
	cout << endl;
	date1.printStandard();
	cout << endl;

	return 0;
