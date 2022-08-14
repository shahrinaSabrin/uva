#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t;
    cin>>t;
    getchar();
    int sum=0;
    while(t--)
    {   
        
        char str[10];
        cin>>str;
        int amount;
        if(strcmp(str, "donate")==0)
        {
            cin>>amount;
            sum+=amount;
           
        }
        else
        {
           
            cout<<sum<<endl;
        }
       


    }
}