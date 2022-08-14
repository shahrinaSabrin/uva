#include<iostream>
using namespace std;
int main()
{
    long long int n,arr[10000];
    while(cin>>n)
    {
        if(n<0)
            break;
        if(n==0)
            cout<<0<<endl;
        
        else
        {
             long long i=1;
             while(n>0)
             {
                 arr[i]=n%3;
                 n=n/3;
                 i++;
             }

              for(long long j=i-1;j>=1;j--)
              {

                  cout<<arr[j];

              }
              cout<<endl;
         }
    }

    return 0;
}