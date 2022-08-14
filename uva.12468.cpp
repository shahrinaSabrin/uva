#include<iostream>
#include<cstdlib>
using namespace std;
int main()
    {
        int current,target,press;
        while(cin>>current>>target,current!=-1&&target!=-1)
        {
            press= abs(target-current);
            if(press>50)
            press=100-press;
            cout<<press<<endl;
        }
    }
