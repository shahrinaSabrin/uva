
#include<iostream>
#include <iomanip>
#include<cstdlib>
using namespace std;
int main()
{
    char ch;
    int h,m;
    while(scanf("%d %c %d",&h,&ch,&m))
    {
        if(h==0 && m==0)
        break;
        float h_a,m_a,angle;

        h_a=h*30+((float)m/60.0)*30;
        m_a=m*6;
        angle=abs(h_a-m_a);
        
        if (angle>180){
            angle=360-angle;
        }
        angle=min(angle,360-angle);
        cout<<fixed <<setprecision(3)<<angle<<endl;


    }
    
}