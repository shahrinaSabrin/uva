#include<iostream>
using namespace std;
int func(int i,int j)
{
    if(j==0)
        return i;
    return func(j,i%j);
}
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        int G=0;
        for(int i=1;i<n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                G+=func(i,j);
            }
        }
        printf("%d\n",G);
    }
    return 0;
}
