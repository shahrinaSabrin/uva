#include <iostream>
#include<cmath>
using namespace std;
int main()

{

    double a,b,c;

    while(cin>>a>>b>>c)

    {
        double s=(a+b+c)/2;
        double violets = sqrt(s*(s-a)*(s-b)*(s-c));
        double r = violets/s;
        double roses = r*r*acos(-1);
        double R = a*b*c /sqrt((a+b+c)*(a+b-c)*(a+c-b)*(b+c-a));
        double sunflowers = R*R * acos(-1) - violets;
        violets -= roses;
        
        printf("%.4lf %.4lf %.4lf\n", sunflowers, violets, roses);
    }

    return 0;

}