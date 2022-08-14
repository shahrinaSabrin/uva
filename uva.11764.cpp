#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int p=0;
    while(t--)
    {
        p++;
        int len;
        cin>>len;
        int wall[len];
        for(int i=0;i<len;i++)
        cin>>wall[i];

        int high_jump=0;
        int low_jump=0,j;
        for(int i=0,j=1;j<len;j++,i++)
        {   
            if(wall[j]==wall[i])
            continue;
            else if(wall[j]>wall[i])
            high_jump++;
            else if(wall[j]<wall[i])
            low_jump++;
        }
        cout<<"Case "<<p<<": "<<high_jump<<" "<<low_jump<<endl;


    }

    return 0;
}