#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str1,str2;
    while(cin>>str1>>str2)
    {
        int num1=0,num2=0;
        for(int x=0;x<str1.size();x++)
         {
          str1[x]=toupper(str1[x]);
         }

         for(int x=0;x<str2.size();x++)
         {
            str2[x]=toupper(str2[x]);
         }
         for(int i = 0; str1[i]; i++)
          {
            if(str1[i] >= 'A' && str1[i] <= 'Z')
            {
                num1 += str1[i]-'A'+1;
            }
          }
          for(int i = 0; str1[i]; i++)
          {
            if(str2[i] >= 'A' && str2[i] <= 'Z')
            {
                num2 += str2[i]-'A'+1;
            }
          }
        int sum1=0,rem=0;
        while(num1 / 10 != 0)
            {
                sum1 = 0;
                while(num1 != 0) 
                {
                    rem = num1 % 10;  
                    sum1 += rem;      
                    num1 = num1 / 10;
                }

                num1 = sum1;
            }
        int sum2=0;
        rem=0;
        while(num2 / 10 != 0)
            {
                sum2 = 0;
                while(num2 != 0) 
                {
                    rem = num2 % 10;  
                    sum2 += rem;      
                    num2 = num2 / 10;
                }

                num2 = sum2;
            }
            float ratio;
            if(sum1>sum2)
            ratio=(float)sum2/(float)sum1;
            else
            ratio=(float)sum1/(float)sum2;

            ratio=ratio*100;
            printf("%.2f%%\n",ratio);



         
    }

}