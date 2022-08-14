#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,k;
        cin>>a>>b;
        int max_count=0;
        for(int i=a;i<=b;i++)
        {   
            float temp=pow(i,0.5);
            int count=0;
            for(int j=1;j<=temp;j++){
                if(i%j==0)
                {
                count++;
                {  
                    if(j<temp) 
                     count++;
                }
                }
      }
            if(count>max_count)
            {
            max_count=count;
            k=i;
            }
        }
        cout<<"Between "<<a<<" and "<<b<<", "<<k<<" has a maximum of "<<max_count<<" divisors.\n";

    }
}