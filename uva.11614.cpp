#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int s;
        cin>>s;
        long long int n= (int)((sqrt(1.0+8.0*s)/2)-0.5);
        cout<<n<<endl;
    }
}