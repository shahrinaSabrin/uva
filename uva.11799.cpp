#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int p=0;
    while(t--)
    {
        p++;
        int a;
        cin>>a;
        int arr[a];
        int max=0;
        for(int i=0;i<a;i++)
        {
            cin>>arr[i];
            if(arr[i]>max)
            max=arr[i];
        }
        cout<<"Case "<<p<<": "<<max<<endl;
    }
}