#include<iostream>
using namespace std;
int main()
{
   int t;cin>>t;
   int p=0;
   while(t--)
   {
    p++;
    int b_d, b_m, b_y, c_d, c_m, c_y, age;
    
           
            scanf("%d/%d/%d", &c_d, &c_m, &c_y);
            scanf("%d/%d/%d", &b_d, &b_m, &b_y);

            age = c_y-b_y;
            if(b_m>c_m || (b_m==c_m && b_d>c_d))
            age--;

            printf("Case #%d: ", p);
            if(age<0)
                printf("Invalid birth date\n");
            else if(age>130)
                printf("Check birth date\n");
            else
                printf("%d\n", age);
        }
    
    return 0;
}