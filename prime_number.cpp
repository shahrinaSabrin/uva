//Sieve Mathode to find prime numbers.
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
       arr[i]=1;
   }
  for (int i=2; i*i<=n; i++)
    {
        if (arr[i] == 1)
        {
           
            for (int j=i*i; j<=n; j += i)
                arr[j] = 0;
        }
    }
 
    
    for (int p=2; p<=n; p++)
    {
       if (arr[p])
          cout << p << " ";
    }
    cout<<endl;
}
 
