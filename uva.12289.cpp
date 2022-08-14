#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        string num;
        cin>>num;
        int len= num.size();
        if(len==5)
        cout<<"3\n";
        else
        {
            
                if((num[0]=='o'&&num[1]=='n')||(num[1]=='n'&&num[2]=='e')||(num[0]=='o'&&num[2]=='e'))
                cout<<"1\n";
                else
                cout<<"2\n";
            
        }
    }
}