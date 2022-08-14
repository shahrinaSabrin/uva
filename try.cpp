//#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
using namespace std;



int sieve(int n);

int main()
{
    int n, temp, q, r;
    
    while(cin>>n){
      int m= sieve(n);
    temp = n;
    q = 0;
    while(temp!=0){
        r = temp%10;
        q = q*10 + r;
        temp /= 10;
    }
    if(m!=0){
        cout<<n<<" is not prime."<<endl;
    }
    else if(m==0){
        if(m==0 && n!=q)
            cout<<n<<" is emirp."<<endl;
        else
        cout<<n<<" is prime."<<endl;
    }
    }
    return 0;
}
int sieve(int n)
{
    int prime[n];
    int x = sqrt(n);
    prime[0] = prime[1] = 1;
    for(int i=4; i<n; i+=2){
        prime[i] = 1;
    }
    for(int i=3; i<x; i+=2){
        if(prime[i]==0){
            for(int j=i+i; j<n; j+=i){
                prime[j] = 1;
            }
        }
    }
    return prime[n];
}