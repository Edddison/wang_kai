
#include <iostream>
#include "Time.h"

int main()
{
	int i = 0;
	Time date1(11,59,59);
	date1.printStandard();

	while (i < 20)
	{
		date1.tick();
		date1.printStandard();
		i++;
	}

	return 0;
}
