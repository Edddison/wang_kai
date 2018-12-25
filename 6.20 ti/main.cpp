#include <iostream>

using namespace std;

int multiple(int a, int b)
{
 int c=0;
 c=b%a;
 if(c==0)
    cout<<"true";
 else
    cout<<"false";
 return 0;

}
int main()
{
 int a=0;
 int b=0;
 int counter=1;
 while(counter>=1)
 {
 cin>>a;
 cin>>b;
 cout<<""<<multiple(a,b);
 }
}
