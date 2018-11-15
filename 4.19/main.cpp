#include <iostream>
using namespace std;

int main()
{
    int number[10],largest=0,slargest=0,counter=1;

    while(counter<=10)
    {
        cout<<"please enter a number:";
        cin>>number[counter];
        if (number[counter]>largest)
        {
            largest=number[counter];
        }
        ++counter;
    }
    counter=1;

    while(counter<=10)
    {
        if(number[counter]!=largest)
        {
            if(number[counter]>slargest)
                slargest=number[counter];
        }
        ++counter;
    }

}
