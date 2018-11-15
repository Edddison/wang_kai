#include <iostream>

using namespace std;

int main()
{
    int number=1,counter=0,minimum=0,figure=0;
    for(cin>>counter;number<=counter;cin>>figure,++number)
        minimum=counter;
    if(figure<minimum)
    {
        minimum=figure;
    }
    cout<<"minimum is :"<<minimum;
}
