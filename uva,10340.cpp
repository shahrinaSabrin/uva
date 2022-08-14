#include <iostream>
#include<cstdio>
using namespace std;

int main()
{
    string str1,str2;
    int flag;

    while(cin>>str1>>str2)
    {
       
        flag=0;
        for(int j=0,i=0;i<str2.size();i++)

        {
            if (str1[j] == str2[i])
            {
                j++;
            }
            if (str1[j] == '\0')
            {
                flag = 1;
                break;
            }

        }

        if(flag)
          cout<<"Yes"<<endl;

        else  
         cout<<"No"<<endl;

    }

return 0;

}
