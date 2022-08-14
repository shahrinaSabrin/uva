#include<iostream>
using namespace std;
int main(){
    int h1,m1,h2,m2,x;
     while(cin>>h1>>m1>>h2>>m2,h1+m1+h2+m2)
  
    {
    int current_time,alarm_time;
    current_time=(h1*60)+m1;
    alarm_time=(h2*60)+m2;
    if(alarm_time<current_time)
    {
       alarm_time+=1440;
    }
    cout<<alarm_time - current_time<<endl;
    }
    return 0;
}