#include <iostream>

using namespace std;

int square(int );

int main()
{
    int a =10;
    cout<<a<<"square:"<<square(a)<<endl;
}

int square(int x)
{
    return x*x;
}
