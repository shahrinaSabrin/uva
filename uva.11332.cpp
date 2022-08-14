#include<iostream>
using namespace std;
int main()
{
    long long int num;
    int rem,sum;
    while(cin>>num,num)
    {   
        sum=num;
        while(num / 10 != 0)
    {
        sum = 0;
        while(num != 0) 
        {
            rem = num % 10;  
            sum += rem;      
            num = num / 10;
        }

        num = sum;
    }
    cout<<sum<<endl;
    }

}