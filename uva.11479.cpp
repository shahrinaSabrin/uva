#include<iostream>
using namespace std;
int main(){
    int t;
    int p=0;
    while(t--)
    {
        p++;
        long long int a,b,c;
        cin>>a>>b>>c;
        if (a <= 0 || b <= 0 || c <= 0)
           cout<<"Case "<<p<<": " << "Invalid"<<endl;
            
        else
        {   if (a + b <= c|| a + c <= b || b + c <= a)
                cout<<"Case "<<p<<": " << "Invalid"<<endl;
                
            else if (a == b && b == c)
                cout<<"Case "<<p<<": " <<"Equilateral"<<endl;
            
            else if (a == b || a == c||b == c)
                cout<<"Case "<<p<<": " <<"Isosceles"<<endl;
                    
            else
                cout<<"Case "<<p<<": " <<"Scalene"<<endl;
        }
    }
    return 0;
}