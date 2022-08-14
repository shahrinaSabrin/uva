#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int p=0;
    while(t--)
    {
        p++;
        float c,f;
        cin>>c>>f;
        float cc=(f/9.0)*5.0;
        c+=cc;
        
        cout<<"Case "<<p<<": "<<fixed <<setprecision(2)<<c<<endl;

    }
}