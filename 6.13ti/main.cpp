#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    float number=0;
    int counter=1;
    while(counter>=1)
    {
        cout<<"number:";
        cin>>number;
        cout<<"floor number:"<<floor(number+0.5)<<"\n";
    }

}
