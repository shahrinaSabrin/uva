#include<iostream>
#include<cstring>
using namespace std;
int main()
{
   char str[1000];
   scanf("%[^\n]s",str);
   char keyboard[50] ="`1234567890-=qwertyuiop[]asdfghjkl;'\\zxcvbnm,./";
    for(int i=0;i<strlen(str);i++)
    {
        char ch = tolower(str[i]);
        if(ch==' '||ch=='\n')
        cout<<ch;
        else
        {
            for(int j=0;j<strlen(keyboard);j++)
            {
                if(ch==keyboard[j])
                cout<<keyboard[j-2];
            }
        }
    }
    cout<<endl;

    return 0;
}