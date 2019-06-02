
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	int i=1;
	cout << "N" << setw(12) << "10*N" << setw(15) << "100*N" << setw(15) << "1000*N" << endl;

	while (i <= 5)
	{
		cout << i<< setw(12) << 10*i << setw(15) << 100*i<< setw(15) << 1000*i<< endl;
		i++;
	}
	return 0;
}
