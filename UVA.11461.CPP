#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b,a!=0&&b!=0)
    {
        int count =0;
        for(int i=a;i<=b;i++)
        {
            int sqroot= sqrt(i);
            if(sqroot*sqroot==i)
            count++;
        }
        cout<<count<<endl;
    }

}