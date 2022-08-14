#include <cstdio>
#include <string>
#include <iostream>
using namespace std;
int main()
{   
    string str;
    int p=0;
   
    while (cin >> str,str != "#")
    {
        p++;
        cout<<"Case "<<p<<": ";
        
        if (str == "HELLO")
            cout<<"ENGLISH\n";
        else if (str == "HOLA")
            cout<<"SPANISH\n";
        else if (str == "HALLO")
            cout<<"GERMAN\n";
        else if (str == "BONJOUR")
            cout<<"FRENCH\n";
        else if (str == "CIAO")
            cout<<"ITALIAN\n";
        else if (str == "ZDRAVSTVUJTE")
            cout<<"RUSSIAN\n";
        else
            cout<<"UNKNOWN\n";
       
        
    }

}