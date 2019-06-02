
#include "DateAndTime.h"

int main()
{
	DateAndTime date1(2004,2,29,23,59,59);
	date1.tick();
	date1.printUniversal();
	date1.printStandard();
	return 0;
}
