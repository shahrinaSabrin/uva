#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int p=0,copy;
    int n;
    while(cin>>n,n>0)
    {
        p++;
       
   
        {
            copy=0;

           for(int j=0;;j++){
                   if(pow(2,j)>=n)
                   {
                        copy=j;
                        break;
                   }
           }

        }
        cout<<"Case "<<p<<": "<<copy<<endl;

    }
}