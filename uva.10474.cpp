#include<iostream>
//#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    int p=0;
    while(cin>>n>>q)
    {
        if(n==0&&q==0)
        break;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int arr_query[q];
        for(int i=0;i<q;i++)
        {
            cin>>arr_query[i];
        }
        sort(arr, arr + n);

        cout<<"CASE# "<<++p<<":\n";
        for(int i=0;i<q;i++)
        {
            int flag=0;
            for(int j=0;j<n;j++)
            {
                if(arr_query[i]==arr[j])
                {
                    cout<<arr_query[i]<<" found at "<<j+1<<endl;
                    flag=1;
                    break;
                }
            }
            if(!flag)
            {
                cout<<arr_query[i]<<" not found\n";
            }
        }

    }
    return 0;
}