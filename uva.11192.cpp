#include<iostream>
#include<cstring>
using namespace std;
int main()

{
    string str;

    int n;
    while(cin>>n)
    {

        if(n==0) break;

        cin>>str;
        int len=str.size();

        int a=len/n;

     for(int i = 0; i < len; i += a) {

            for(int j = i+a-1; j >= i; j--)
                cout<<str[j];

        }

    cout<<endl;

    }

    return 0;

   

}