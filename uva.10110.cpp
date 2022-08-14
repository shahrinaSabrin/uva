#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    unsigned int n;
    while(cin>>n,n!=0)
    {
        int sqroot= sqrt(n);
        if(sqroot*sqroot==n) 
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;  
        
    }
}