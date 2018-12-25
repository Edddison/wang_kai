#include <iostream>

using namespace std;

int integerPower(int a ,int b)
{
    int total=1;
    int counter=1;
    while(counter<=b)
    {
        total=total*a;
        ++counter;
    }
    return total;
}
int main()
{
    int a=0;
    int b=0;
 cin>>a;
 cin>>b;
 cout<<""<<a<<"times"<<""<<b<<"is:"<<integerPower(a,b);
}
