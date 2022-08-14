#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str;
    while(cin>>str)
    {   int num=0;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]>='a' && str[i]<='z')
             num += str[i]-'a'+1;
			else
		     num += str[i]-'A'+27;
        }
        int count=0;
        for(int i=2;i<num;i++)
        {
            if(num%i==0) 
             count++;
        }
        if(count==0)
             cout<<"It is a prime word.\n";
        else 
            cout<<"It is not a prime word.\n";
    }

    
}