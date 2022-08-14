#include<iostream>
using namespace std;
int main(){
    int n,k;
    while(cin>>n>>k)
    {
        int sum=0;
        int ans=0;
        int re_pack=0;

        ans+=n;

        while(n!=0)
        {
        sum=n+re_pack;
        re_pack=sum%k;
        n=sum/k;
        ans+=n;
        }
        cout<<ans<<endl;
    }
}