#include<iostream>
using namespace std;

int main()
{   
    long long int n;
  
    while(scanf("%lld", &n) && n)
    {
        if(n>=101)
    cout<<"f91("<<n<<") = "<<n-10<<endl;
    else if(n<=100)
    cout<<"f91("<<n<<") = "<<"91"<<endl;
    }
    return 0;
}