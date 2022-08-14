#include<iostream>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a>=b)
        {
            int m=(a+b)/2;
            int n =(a-b)/2;
            if(m+n==a)
            cout<<m<<" "<<n<<endl;
            else
            cout<<"impossible"<<endl;

        }
        else
        cout<<"impossible"<<endl;
    }

}