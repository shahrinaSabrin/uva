#include<iostream>
using namespace std;
int main()
{
    int m,n;
    while(cin>>m>>n)
    {
        int cut=0;
        if(n>m)
        {
            int temp=n;
            n=m;
            m=temp;
        }
        cut+=m-1;
        cut+=m*(n-1);
        cout<<cut<<endl;
    }

}