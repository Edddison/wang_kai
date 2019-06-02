
#include "Date.h"

int main()
{
	Date date1(7,8,2019);
	int i = 0;


	date1.displayMessage();

	while (i < 200)
	{
		date1.nextday();
		date1.displayMessage();
		i++;
	}


	return 0;
}
