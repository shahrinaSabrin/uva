#include <iostream>
#include<cmath>
using namespace std;
int main()

{

    double a,b,c;

    while(cin>>a>>b>>c)

    {
        double s=(a+b+c)/2;

         if(s==0)
            printf("The radius of the round table is: 0.000\n");
        
        else

        {

        double area=s*(s-a)*(s-b)*(s-c);

        double r=sqrt(area)/s;

        printf("The radius of the round table is: %.3lf\n",r);

        }

    }

    return 0;

}