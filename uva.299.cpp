#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int array[n];
        for(int i=0;i<n;i++)
        cin>>array[i];

        int temp,swap=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(array[j]<array[i])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
                swap++;
            }
            }
        }
        
        cout<<"Optimal train swapping takes "<<swap<<" swaps."<<endl;
    }
}