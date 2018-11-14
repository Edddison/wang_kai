#include <iostream>

using namespace std;

int main()
{
    int hour=0;
    int rate=10;
    int extra=0;
    int counter=0;
    int salary=0;

    while(counter>=0)
    {
        cout<<"Enter hours worked(-1 to end):";
        cin>>hour;
        cout<<"Enter hourly rate of the employee($00.00):"<<rate;

        if(hour<=40)
        {

        salary=hour+rate;
        cout<<"\nsalary is :$"<<salary<<"\n\n";
        }
        else

            {
                extra=(hour-40)*5;
                salary=hour+rate+extra;
                cout<<"\nsalary is :$"<<salary<<"\n\n";
            }
            counter=++counter;
    }


}
