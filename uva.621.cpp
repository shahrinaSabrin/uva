#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        string str;
        cin>>str;
        int len = str.size();
        if(str=="1"||str=="4"||str=="78")
        cout<<"+\n";
        else
        {
            if(str[len-1]=='5'&&str[len-2]=='3')
            cout<<"-\n";
            else if(str[0]=='9'&&str[len-1]=='4')
            cout<<"*\n";
            else
            cout<<"?\n";
        }
    }
}