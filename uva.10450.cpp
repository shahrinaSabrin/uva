#include <iostream>
using namespace std;
int main()
{    
    unsigned long long arr[51];
    arr[1] = 2;
    arr[2] = 3;
    for (int i = 3; i < 51; ++i)
        arr[i] = arr[i - 1] + arr[i - 2];

    int t, Case = 1;
    cin >> t;
    while ( t-- )
    {
        
        
        int n;
        cin >> n;
        cout << "Scenario #" << Case++ << ":\n";
        cout << arr[n] << endl << endl;
    }
    return 0;
}