#define _CRT_SECURE_NO_WARNINGS
#include "Time.h"

int main()
{

	//��ȡ��ǰʱ��
	time_t rawtime;
	struct tm *timeinfo;

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	cout << "Current local time and date:" << asctime(timeinfo);


	//��ǿ��Time�࣬����������time������localtime�����ĵ�ǰʱ���ʼ��Time��Ķ���
	Time date1;
	date1.setTime(timeinfo->tm_hour,timeinfo->tm_min ,timeinfo->tm_sec);
	date1.printUniversal();
	cout << endl;
	date1.printStandard();
	cout << endl;

	return 0;
