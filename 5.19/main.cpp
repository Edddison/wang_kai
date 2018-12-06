#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
  double i=4;
  int counter=1;
  int time=2;
  while(time<=1000)
  {
      counter=counter+2;
      int judge=0;
      judge=time%2;
      if(judge=0)
      {
          double j=static_cast<double>(i)/counter;
          double i=static_cast<double>(i)-j;
      }
      else if(judge!=0)
      {
          double j=static_cast<double>(i)/counter;
          double i=static_cast<double>(i)+j;
      }
      ++time;
  }
  cout<<setprecision(15)<<fixed;
  cout<<i;
}
