#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int p=0;
    while(t--)
    {
        p++;
        int a, b,c;
        cin>>a>>b>>c;
        if(a<=20 && b<=20 && c<=20)
        cout<<"Case "<<p<<": good\n";
        else
        cout<<"Case "<<p<<": bad\n";
    }
}