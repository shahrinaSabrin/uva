#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n,n!=0)
    {
        long long int sq= n*(n+1)*(2*n+1)/6;
        cout<<sq<<endl;
    }
}