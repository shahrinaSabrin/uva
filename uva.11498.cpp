#include<iostream>
using namespace std;
int main()
{
    int t;
    while(cin>>t,t!=0)
    {
        int x1,y1;
        cin>>x1>>y1;
        int x2,y2,temp_x,temp_y;
        while(t--)
        {
           
            cin>>x2>>y2;
            temp_x=x2-x1;
            temp_y=y2-y1;
            if(temp_x>0 && temp_y>0)
            cout<<"NE"<<endl;
            else if(temp_x<0 && temp_y>0)
            cout<<"NO"<<endl;
            else if(temp_x<0 && temp_y<0)
            cout<<"SO"<<endl;
            else if(temp_x>0 && temp_y<0)
            cout<<"SE"<<endl;
            else
            cout<<"divisa"<<endl;
        }
        
        
        
    }
}