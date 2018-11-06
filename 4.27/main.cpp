#include <iostream>

using namespace std;

int main()
{
    int a=0;
    int b=0;
    int c=0;
    int i=1;

    cout<<"enter a level 2 number:";
    cin>>a;

    while(a!=0)
    {
        m=a%10;
        b=b+c*i;

        a=(a-c)/10;
        i=i*2;
    }

    cout<<"this number is "<<b<<"in level 10"<<endl;

    return 0;
}
