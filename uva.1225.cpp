#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    int arr[10];
    
    while(test--)
    {
        for(int i=0;i<10;i++)
        {
            arr[i]=0;
        }
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            int num=i;
            while(num!=0)
            {
                int p=num%10;
                arr[p]++;
                num/=10;
            }
        }
        for(int i=0;i<10;i++)
        {
            if(i==9)
            cout<<arr[i]<<"\n";
            else
            cout<<arr[i]<<" ";
        } 
       
    }
}