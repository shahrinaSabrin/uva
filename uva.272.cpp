//unsolved!
#include<iostream>
using namespace std;
int main(){
    string ch;
    
    int count=1;
    while(getline(cin,ch))
    {  for(int i=0;i<ch.size();i++)
    {
      if((ch[i]=='"')&&(count%2==1))
      {
      cout<<"``";
      count++;
      }
      else if((ch[i]=='"')&&(count%2==0))
      {
      cout<<"''";
      count++;
      }
      else
      cout<<ch[i];
    }
    cout<<endl;

    }

    return 0;
}