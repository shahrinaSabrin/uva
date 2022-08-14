#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str;
    while(getline(cin,str))
    {

        int count=0;
        for(int i=0;i<str.size();i++)
        {
            str[i]=toupper(str[i]);
          
        }
        int c=0;
        for(int i=0;i<str.size();i++)
        {
         
            if((str[i]>='A')&&(str[i]<='Z'))
            {
            c=1;
            }
            else
            {  
                count+=c;
                c=0;
            }
            
            
        }
        cout<<count+c<<endl;

    }
}