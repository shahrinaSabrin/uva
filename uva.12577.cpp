#include<iostream>
#include<cstring>
using namespace std;
int main()
{   
   string str;
    int p=0;
    while(cin>>str)
    {   
        if(str=="*")
        break;
        p++;
        if(str[0]=='H')
        cout<<"Case "<<p<<": Hajj-e-Akbar"<<endl;
        else
        cout<<"Case "<<p<<": Hajj-e-Asghar"<<endl;

    }
    return 0;
}