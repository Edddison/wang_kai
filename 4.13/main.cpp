#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int miles=0;
    int gallons=0;

    int counter=0;
    int totalmiles=0;
    int totalgallons=0;


    while(counter>=0)
    {

        cout<<"Enter miles driven(-1 to quit):";
        cin>>miles;
        if(miles!=-1)
        {
        cout<<"Enter gallons used:";
        cin>>gallons;

        float MPG=static_cast<float>(miles)/(gallons);
        cout<<setprecision(6)<<fixed;
        cout<<"MPG this trip:"<<MPG<<endl;

        totalmiles=totalmiles+miles;
        totalgallons=totalgallons+gallons;
        float total=static_cast<float>(totalmiles)/totalgallons;
        cout<<setprecision(6)<<fixed;
        cout<<"Total MPG :"<<total<<"\n\n"<<endl;

        ++counter;
        }
        else
            cout<<"thanks for using gas-mile counter";
    }


}
