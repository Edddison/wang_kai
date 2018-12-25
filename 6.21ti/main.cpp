#include <iostream>

using namespace std;

int iseven(int a)
{
    if (a%2==0)
        cout<<"true\n";
        else
        cout<<"false\n";
        return 0;
}
int main()
{
   int a=0;
   int counter=1;
   while (counter>=1)
   {
    cin>>a;
    iseven(a);
   }

}
