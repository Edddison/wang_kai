#include <iostream>

using namespace std;
int square(int side)
{
    int counter1=0;
    int counter2=0;
    while(counter1<side)
    {
        while(counter2<side)
        {
            cout<<"*";
            ++counter2;
        }
        cout<<"\n";
        counter2=0;
        ++counter1;
    }
    return 0;
}

int main()
{
int side=0;
cin>>side;
square(side);
}
