#include<iostream>
using namespace std;
int main(){
    int l;
    while(cin>>l,l!=0)
    {
        int k;
        int arr[50];
        int n=l,count_1=0;
        for(int i=0; n>0; i++)    
        {    
           if(n%2)
           {
            count_1++;
           }
            arr[i]=n%2; 
            n= n/2; 
            k=i; 
        }
        cout<<"The parity of ";
        for(int i=k;i>=0;i--) 
        {
            cout<<arr[i];
        } 
        cout<<" is "<<count_1<<"  (mod 2).\n";

      
    }

    return 0;
}