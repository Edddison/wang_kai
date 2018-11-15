#include <iostream>

using namespace std;

int main()
{
    int counter=1,number=0,total=1;
    for(counter;counter<=15;++counter)
    {

    number=counter%2;
    if(number!=0)
    {
       total= total*counter;

    }

    }
    cout<<"total is:"<<total;

}
