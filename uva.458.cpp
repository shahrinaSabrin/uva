#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    while (cin >> str)
    {
     char ch;
        for (int i = 0; i < str.size(); i++)
        {
            ch=str[i]-7;
            cout<<ch;
        }
        cout << endl;
    }

    return 0;
}