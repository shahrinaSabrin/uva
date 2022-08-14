//#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str;
    string str2;
    
    while(getline(cin,str)&&str!="DONE"){
		string str1,str2;
		int len=str.length();
		for(int i=0;i<len;i++){
			if(isalpha(str[i])){
				str1+=tolower(str[i]);
			}
		}
		str2=str1;
		reverse(str1.begin(),str1.end());
		if(str1==str2)
			cout<<"You won't be eaten!"<<"\n";
		else{
			cout<<"Uh oh.."<<"\n";
		}

	}
}