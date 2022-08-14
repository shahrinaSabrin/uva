
#include<iostream>
using namespace std;
 int main()
{
   long int a,b,i,n,s,j,k,u;
  while(scanf("%ld%ld",&a,&b))
     {
        if(a==0 && b==0)
        break;
          long int max_len=0;
          
          if(a>b)
            {
           swap(a,b);
            }
            long int d=a;
          for(;a<=b;a++)
          {
                  n=a;
                  long int len=0;
                  
                  while(1)
                  {
                    if(n%2==0)
                        n=n/2;
                    else
                      n=3*n+1;
                      len++;
                   
                      if(n==1)
                      break;
                  }
                  
                  if(len>max_len)
                  {
                    max_len=len;
                    u=a;
                  }
          }
            printf("Between %ld and %ld, %ld generates the longest sequence of %ld values.\n",d,b,u,max_len);

     }
return(0);
}