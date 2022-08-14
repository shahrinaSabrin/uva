#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"PERFECTION OUTPUT"<<endl;
    while(cin>>n)
    {
        if(n==0)
        {
            cout<<"END OF OUTPUT"<<endl;
            break;
        }
        printf("%5d  ",n);
        int sum=0;
        for(int i=1;i<n;i++)
        {
            if(n%i==0)
            {
                sum+=i;
            }
        }
        if(sum==n)
        {
            cout<<"PERFECT"<<endl;
        }
        else if(sum>n)
        cout<<"ABUNDANT"<<endl;
        else
        cout<<"DEFICIENT"<<endl;


    }
}