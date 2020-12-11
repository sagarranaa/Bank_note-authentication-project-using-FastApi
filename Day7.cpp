// The City's bus system carries 1200,000 people each day .how many people does the bus system carry each year ? (1 year=365) solve without using *,/ operator ,bitwise operator or loop..
#include<iostream>
using namespace std;
int multiply(int x,int y)
{
    if(y==0)
    return 0;
    if(y>0)
    return (x +multiply(x,y-1));
    if(y<0)
    return -multiply(x,-y);
}
int main()
{
    int carriesEachDay=1200000;
    int CarryEachYear=365;
    int peopleTravelYearly=multiply(carriesEachDay,CarryEachYear);
    cout<<peopleTravelYearly;
    return 0;
    

   
}