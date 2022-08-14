#include <bits/stdc++.h>
using namespace std; 
int main ()
{
    int test;
   cin>>test;
    while (test--)
    {
        int g,l;
        cin>>g>>l;
        int a, b;
        if ( l%g != 0 )
        {
            cout<<"-1\n";
        }
        else
        {
            cout<<g<<" "<<l<<endl;
        }
    }
 
    return 0;
}
