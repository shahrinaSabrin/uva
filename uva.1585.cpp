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
        string str;
        cin>>str;
        int o_count=0;
        int count=0;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='O')
            {
                o_count++;
                count+=o_count;
            }
            else{
                o_count=0;
                count+=o_count;

            }
        }
        cout<<count<<endl;
    }
}