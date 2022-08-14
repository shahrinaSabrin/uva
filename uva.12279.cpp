#include<iostream>
using namespace std;
int main()
{
    int n;
    int p=0;
    while(cin>>n,n!=0)
    {
        p++;
        int arr[n];
        int given=0,due=0;
        for(int i=0;i<n;i++)
        { 
          cin>>arr[i];
          if(arr[i]>0)
          due++;
          else
          given++;
        
        }
        cout<<"Case "<<p<<": "<<due-given<<endl;



    }
}