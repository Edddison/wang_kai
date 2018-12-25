#include <iostream>
#include<math.h>

using namespace std;

double hypotenuse(double a ,double b)
{
    int c=0;
    int d=0;
    c=a*a+b*b;
    d=pow(c,0.5);
    return d;
}
int main()
{
    cout<<"first experiment:"<<hypotenuse(3,4);
    cout<<"\nsecond experiment:"<<hypotenuse(5,12);
    cout<<"\nthird experiment:"<<hypotenuse(8,15);
}
