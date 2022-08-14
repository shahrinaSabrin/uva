#include<iostream>
#include<cmath>
#include<cstdlib>
#include <iomanip>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float a,b,c;
        cin>>a>>b>>c;
        float dis= sqrt(pow(a,2)+pow(b,2));
        float max= dis+c;
        float min= abs(dis-c);
        cout<<fixed <<setprecision(2)<<min<<" "<<max<<endl;
    }

}