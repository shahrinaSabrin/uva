#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long int calculation;
        calculation = (((((n*63))+7492)*235)/47)-498;
        calculation/=10;
        calculation%=10;
        calculation=abs(calculation);

        cout<<calculation<<endl;
    }


}