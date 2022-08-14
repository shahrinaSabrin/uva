#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    int p=0;
    while(t--)
    {
        p++;
        int term1, term2, final, attendance,classTest[3];;
        cin>>term1>>term2>>final>>attendance;
        for(int i=0;i<3;i++)
        {
            cin>>classTest[i];
        }
        sort(classTest, classTest + 3);
        
        int total = term1 + term2 + final + attendance + (classTest[1] + classTest[2]) / 2;
        
        cout<<"Case "<<p<<": ";
        if (total >= 90)
            cout<<"A\n";
        else if (total >= 80)
            cout<<"B\n";
        else if (total >= 70)
            cout<<"C\n";
        else if (total >= 60)
            cout<<"D\n";
        else
            cout<<"F\n";
        
        
    }
}