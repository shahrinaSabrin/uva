#include<iostream>
using namespace std;
int main()
{
    int t_case,n,re_pack,v,sum,ans;
    while(cin>>n)
    {
       
        ans=n;

        while(n>=3)
        {
            ans+=n/3;
            n=n/3+n%3;
            
        }
        if(n==2)
            ans+=1;

        cout<<ans<<endl;
    }
    return 0;
}