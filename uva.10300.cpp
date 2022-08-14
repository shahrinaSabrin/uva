#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a,b,c,result=0;
        while(n--)
        {
            cin>>a>>b>>c;
            result+=a*c;
        }
        cout<<result<<endl;

    }
}