#include<iostream>
using namespace std;

int main()
{
   int n;
   while(cin>>n)
   {

  if((n>=0 && n<=7) || (n<0 && n%2==0))
    cout<<"Underflow!"<<endl;
    else if(n>=8&&n<=13){
        long long int fact=1;
        for(int i=n;i>=1;i--)
        fact*=i;

    cout<<fact<<endl;
    }
    else
    cout<<"Overflow!"<<endl;
   }
}