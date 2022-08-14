#include<iostream>
using namespace std;
int main()
{
    long int a,b;
    while(cin>>a>>b,a!=0&& b!=0)
    {
        int count[10]={0};
        for(int i=a;i<=b;i++)
        {
            int n=i;
            while(n!=0)
            {
                if(n%10==0)
                count[0]++;
                else if(n%10==1)
                count[1]++;
                else if(n%10==2)
                count[2]++;
                else if(n%10==3)
                count[3]++;
                else if(n%10==4)
                count[4]++;
                else if(n%10==5) 
                count[5]++;
                else if(n%10==6)
                count[6]++;
                else if(n%10==7)
                count[7]++;
                else if(n%10==8)
                count[8]++;
                else
                count[9]++;

                n/=10;     
            }
           
        }
         for(int i=0;i<10;i++)
            cout<<count[i]<<" ";
            cout<<endl;
    }
}