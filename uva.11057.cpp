//#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n,p,k;
    
    while(cin>>n,n!=EOF)
    {
       int arr[n];
       for(int i=0;i<n;i++)
       {
        cin>>arr[i];
       }
       int amount;
       cin>>amount;
       sort(arr,arr+n);
       int temp=n;
       for(int i=0;i<n;i++)
       {
        for(int j=i;j<n;j++)
        {
            if(arr[i]+arr[j]==amount)
           {
              if((j-i)<temp)
              {
                temp = arr[j]-arr[i];
                p=arr[i];
                k=arr[j];
              } 
           }
        }
       }
       cout<<"Peter should buy books whose prices are "<<p<<" and "<<k<<".\n";
       
    }
}