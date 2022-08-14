
#include<iostream>
using namespace std;
int main()
{
    long long  n,a,s,c;
    int t,i;
    while(cin>>t)
    {
        while(t--)
        {
            cin>>n;
        a=n;
        c=0;
        while(1)
        {
            s=0;
            while(n!=0)
            {
                s=s*10+n%10;
                n/=10;
            }
            if(s==a)
            break;
            else
            {
            n=s+a;
            a=s+a;
            c++;
            }

        }
   cout<<c<<" "<<a<<endl;
        }
    }

   return 0;
}