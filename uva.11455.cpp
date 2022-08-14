#include<iostream>
#include <cstdio>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, arr[4], i;
    scanf("%d", &t);
    while(t--) {
        for(i = 0; i < 4; i++)
            scanf("%d", arr+i);
        sort(arr, arr+4);
        if(arr[0] == arr[3])
            puts("square");
        else if(arr[0] == arr[1] && arr[2] == arr[3])
            puts("rectangle");
        else if(arr[3] <= arr[0]+arr[1]+arr[2])
            puts("quadrangle");
        else
            puts("banana");
    }
    return 0;
}