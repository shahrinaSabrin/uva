#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n;
        cin>>n;
        double arr[n];
        double sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        double avg= sum/(double)n;
        double sum2=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>avg)
            sum2++; 
        }
        cout<<fixed <<setprecision(3)<<(sum2/(double)n)*100<<"%"<<endl;
        
    }
    return 0;
}