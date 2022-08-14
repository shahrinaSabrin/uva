#include<iostream>
#include <iomanip>
#include<cmath>

using namespace std;
int main()
{
   double n,p;
   while(scanf("%lf%lf",&n,&p)!=EOF)
    {
        cout<<fixed <<setprecision(0)<<pow(p,1.0/n)<<endl;
    }
    return 0;
}