#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long int num;
    while(cin>>num)
    {
            long long int p=num;
            long long int i=2;
            while(i<=num)
            {
                if(num%i==0)
                break;
                i++;
            }

            long long int n=0;
            while(num!=0)
            {
                n=n*10+num%10;
                num/=10;
            }


            long long int j=2;
            while(j<=n)
            {
                if(n%j==0)
                break;
                j++;
            }
           
            if(p==2)
                printf("%lld is prime.\n",p);
            else if((j==n)&&(i==p)&&(p!=n))
                printf("%lld is erime.\n",p);
            else if(i==p)
                printf("%lld is prime.\n",p);
            else
                printf("%lld is not prime.\n",p);


    }
    return 0;
}