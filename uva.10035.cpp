#include<iostream>
using namespace std;
int main()
{
    long long int a,b;
    while(cin>>a>>b,a!=0||b!=0)
    {
        int carry=0;
        int c=0;
        while(a!=0||b!=0)
        {
            if(((a%10)+(b%10)+c)>9)
            {
                c=1;
                carry+=c;
            }
            else
            {
                c=0;
            }
            a/=10;
            b/=10;

        }
         if(carry==0)
       {
           cout<<"No carry operation."<<endl;
       }
       else if(carry==1)
       {
           cout<<carry<<" carry operation."<<endl;
       }
       else{
       cout<<carry<<" carry operations."<<endl;
       }
    }
    return 0;
}