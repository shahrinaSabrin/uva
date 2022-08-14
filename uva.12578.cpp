
#include <iostream>
#define PI acos(-1.0)
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      double len,w,r; 
      cin>>len;
      r=len*0.2;
       w=len*0.6;
      double total = len*w;
      double red = PI * r * r;
      double green= total -red;
      
      printf("%.2lf %.2lf\n",red,green);
    }
    return 0;
}