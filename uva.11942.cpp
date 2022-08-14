#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cout<<"Lumberjacks:"<<endl;
    while(t--)
    {
        int arr[10];
        for(int i=0;i<10;i++)
        {
            cin>>arr[i];
        }
        int ass=0,des=0;
        for(int i=0;i<9;i++)
        {
            if(arr[i]<arr[i+1])
            ass++;
            else
            des++;
            
        }
        if(ass==9 || des==9)
        cout<<"Ordered"<<endl;
        else
        cout<<"Unordered"<<endl;
        
    }
}