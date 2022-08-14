#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int x=0;
    while(t--)
    {
        x++;
        int n,k,p;
        cin>>n>>k>>p;
        int count =k;
        for(int i=1;i<=p;i++)
        {
            if(count==n)
            count=1;
            else
            count++;
            
         }
         cout<<"Case "<<x<<": "<<count<<endl;

    }
}