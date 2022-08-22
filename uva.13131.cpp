
//OF Nlog(N) OR OF N.
#include<bits/stdc++.h>
#define max 500001
using namespace std;

vector<int>divisor[max];
void divisors()
 {
    for(int i=1;i<=max;i++)
    {
        for(int j=i;j<=max;j+=i)
        {
            divisor[j].push_back(i);
        }
    }
    
}

int main()
{
    divisors();
    int test;
    cin>>test;
    while(test--)
    {
        int n,k;
        cin>>n>>k;
        int cnt=0;
        for(int i=0;i<divisor[n].size();i++)
        {
            if(divisor[n][i]%k!=0)
            {
                cnt+=divisor[n][i];
            }
        }
        cout<<cnt<<endl;
    }
     
} 
