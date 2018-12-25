#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    float number;
   int counter=1;
   while(counter>=1)
   {
      cout<<"number:";
      cin>>number;
      cout<<"roundToInteger number:"<<floor(number+0.5);
      cout<<"\nroundToTenths number:"<<floor(number*10+0.5)/10;
      cout<<"\nroundToHundreds number:"<<floor(number*100+0.5)/100;
      cout<<"\nroundToThousands number:"<<floor(number*1000+0.5)/1000<<"\n";
   }
}
