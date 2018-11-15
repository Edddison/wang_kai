#include <iostream>

using namespace std;

int main()
{
    unsigned int pass=0,failures=0,counter=1;
    int result=0;
    while(counter<=10)
    {
        cout<<"Enter result(1=pass 2=fail)";
        cin>>result;

            if(result==1||result==2)
            {
                if(result==1)
                    {
                    ++pass;
                    ++counter;
                    }
                else
                    {
                    ++failures;
                    ++counter;
                    }
            }

            else
                cout<<"please reenter a new result\n";




    }
       cout<<"pass:"<<pass<<"\n"<<"fail:"<<failures;
}
