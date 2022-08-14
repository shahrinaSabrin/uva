#include <iostream>
using namespace std;
int main() {
    int t;
  cin>>t;
    for(int i=1;i<=t;i++){
	int middle,a1,a2,a3;
	cin>>a1>>a2>>a3;
	middle= a1>a2?  (a2>a3?a2: (a1>a3?a3:a1)) :  (a1>a3?a1: (a2>a3?a3:a2));
	cout<<"Case "<<i<<": "<<middle<<endl;
    }
	return 0;
}