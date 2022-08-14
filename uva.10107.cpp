#include<iostream>
using namespace std;
int main()
{
    int arr[10000];
    int n=1;
    while(cin>>arr[n])
    {
        
        sort(arr, arr+n+1);
            if(n==1){
                cout<<arr[1]<<endl;
            }
            else if(n%2==0){
                cout<<(arr[n/2]+arr[(n/2)+1])/2<<endl;
            }
            else if(n%2!=0){
                cout<<arr[(n/2)+1]<<endl;
            }
         n++;  
    }
    return 0;
    
}