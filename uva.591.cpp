#include<iostream>
using namespace std;
int main()
{
    int n;
    int p=0;
    while(cin>>n,n>0)
    {   p++;
        int arr[n];
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        int avg = sum/n;
        int move=0;
        for(int i=0;i<n;i++)
        {
           if(arr[i]>avg)
           move+=arr[i]-avg;
        }
        cout<<"Set #"<<p<<endl;
        cout<<"The minimum number of moves is "<<move<<".\n"<<endl;

    }
}