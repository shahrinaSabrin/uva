#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long int a,b,c;
   while( cin>>a>>b>>c,a!=0&&b!=0&&c!=0)
   {
    a=a*a;
    b=b*b;
    c=c*c;
    if(a+b==c||b+c==a||a+c==b)
    cout<<"right"<<endl;
    else
    cout<<"wrong"<<endl;
   }
}