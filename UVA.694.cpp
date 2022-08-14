#include<iostream>
using namespace std;
int main()
    {
        long long int a,b;
        int t=0;
        while(cin>>a>>b,a!=-1&&b!=-1)
        {
            int p=a;
            t++;
            int count=0;
            while (a <= b)
             {
                if (a == 1)
                 {
                    count++; 
                    break;
                 }
                else if (a %2 == 0)
                 {a /= 2;
                  count++;
                 }
                else if (a %2 == 1)
                 {
                    a = (3 * a) + 1;
                     count++;
                 }
             }
            cout<<"Case "<<t<<": A = "<<p<<", limit = "<<b<<", number of terms = "<<count<<endl;
        }

    }
