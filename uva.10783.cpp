//10783,11479,10696
#include<iostream>
using namespace std;
int main()
{   
    int t,p=0;
    cin>>t;
    while(t--)
    {   
        p++;
        int a,b;
        cin>>a>>b;
        int sum=0;
        for(int i=a;i<=b;i++)
        {
            if(i%2!=0)
            sum+=i;
        }
        cout<<"Case "<<p<<": "<<sum<<endl;

    }

    return 0;
}